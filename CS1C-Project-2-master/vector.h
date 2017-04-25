#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <iterator>



template<class T>
class vector
{
    int size_v;					// the size
    T* elem;					// a pointer to the elements
    int space;					// size+free_space
public:
    vector() : size_v{0} , elem{new T [space]} , space{0} {}				// default constructor
    explicit vector(int s) : size_v{0} , elem{new T [s]} , space{s} {}			// alternate constructor
    vector(const vector&);					// copy constructor
    vector& operator=(const vector&);		// copy assignment
    vector(const vector&&);				// move constructor
    vector& operator=(const vector&&);	// move assignment
    const T& operator[](int n) const;			// access: return reference
    T& operator[](int n);			// access: return reference
    int size() const {return size_v;}					// the current size
    int capacity() const {return space;}				// current available space
    void resize(int newsize);			// grow
    void push_back(T d);			// add element
    void reserve(int newAlloc);			// get more space
    using iterator = T*;
    using const_iterator = T*;
    iterator begin();			// points to first element
    const_iterator begin() const;
    iterator end();			// points to one beyond the last element
    const_iterator end() const;
    iterator insert(iterator p, const T& v);// insert a new element v before p
    iterator erase(iterator p);		  // remove element pointed to by p
    ~vector() {delete [] elem;}						// destructor
};

#include "vector.h"

/******************************************
 * COPY CONSTRUCTOR
 *
 * description:
 * takes in reference of another vector and
 * creates and entire new copy
 *****************************************/
template<class T>
vector<T>::vector(const vector& source)
    :size_v{source.size_v} , space{source.space} , elem{new T[source.space]}
{
    for (int i = 0; i < source.size_v; i++)
    {
        elem[i] = source.elem[i];
    }
}

/******************************************
 * OPERATOR= ASSIGNMENT OVERLOAD
 *
 * description:
 * overloads the assignment operator so that
 * the contents of the vector are properly
 * copied
 *****************************************/
template<class T>
vector<T>& vector<T>::operator=(const vector& rhs)
{
    delete [] elem;

    space = rhs.space;
    elem = new T [space];
    for (int i = 0; i < rhs.size_v; i++)
    {
        elem[i] = rhs.elem[i];
    }
    return this;
}

/******************************************
 * MOVE CONSTRUCTOR
 *
 * description:
 *****************************************/
template<class T>
vector<T>::vector(const vector&& source)
    :size_v{source.size_v} , space{source.space} , elem {nullptr}
{
    elem = source.elem;
    source.elem = nullptr;
    source.size_v = 0;
    source.space = 0;
}

/******************************************
 * OPERATOR= MOVE OVERLOAD
 *
 * description:
 *****************************************/
template<class T>
vector<T>& vector<T>::operator=(const vector&& rhs)
{
    delete [] elem;
    size_v = rhs.size_v;
    space = rhs.space;
    elem = rhs.elem;
    rhs.elem = nullptr;
    rhs.size_v = 0;
    rhs.space = 0;
    return this;
}

/******************************************
 * CONST OPERATOR[] OVERLOAD
 *
 * description:
 *****************************************/
template<class T>
const T& vector<T>::operator[](int n) const
{
    if (n >= 0 && n < size_v)
    {
        return elem[n];
    }
    else
    {
        return nullptr;
    }
}

/******************************************
 * OPERATOR[] OVERLOAD
 *
 * description:
 *****************************************/
template<class T>
T& vector<T>::operator[](int n)
{
    if (n >= 0 && n < size_v)
    {
        return elem[n];
    }
    else
    {
        return nullptr;
    }
}

/******************************************
 * FUNCTION RESIZE
 *
 * description:
 *****************************************/
template<class T>
void vector<T>::resize(int newsize)
{
    reserve(newsize);
    for (int i=size_v; i<newsize; ++i) elem[i] = 0; // initialize new elements
    size_v = newsize;
}

/******************************************
 * FUNCTION PUSH_BACK
 *
 * description:
 *****************************************/
template<class T>
void vector<T>::push_back(T d)
{
    if (space == 0)
    {
        reserve(8);
    }					// start with space for 8 elements
    else if (size_v == space)
    {
        reserve(2*space);
    }
    elem[size_v] = d;							// add d at end
    size_v++;
}

/******************************************
 * FUNCTION RESERVE
 *
 * description:
 *****************************************/
template<class T>
void vector<T>::reserve(int newAlloc)
{
    if (newAlloc <= space)
    {
        return nullptr;
    }

    T* newElem = new T[newAlloc]; 			// allocate new space
    for (int i=0; i<size_v; i++)
    {
        newElem[i] = elem[i];// copy old elements
    }
    delete[] elem; 								// deallocate old space
    elem = newElem;
    space = newAlloc;
}

/******************************************
 * FUNCTION *BEGIN
 *
 * description:
 *****************************************/
template<class T>
T* vector<T>::begin()
{
    if (size_v == 0)
    {
        return nullptr;
    }
    return &elem[0];
}

/******************************************
 * FUNCTION *CONST_BEGIN
 *
 * description:
 *****************************************/
template<class T>
T* vector<T>::begin() const
{
    if (size_v == 0)
    {
        return nullptr;
    }
    return &elem[0];
}

/******************************************
 * FUNCTION *END
 *
 * description:
 *****************************************/
template<class T>
T* vector<T>::end()
{
    if (size_v == 0)
    {
        return nullptr;
    }
    return &elem[size_v];
}

/******************************************
 * FUNCTION *CONST_END
 *
 * description:
 *****************************************/
template<class T>
T* vector<T>::end() const
{
    if (size_v == 0)
    {
        return nullptr;
    }
    return &elem[size_v];
}

/******************************************
 * FUNCTION INSTERT
 *
 * description:
 *****************************************/
template<class T>
T* vector<T>::insert(iterator p, const T& v)
{
    int index = p - begin();
    if (size() == capacity())
    {
        if (capacity() == 0)
        {
            space = 8;
            while (index > capacity())
            {
                reserve(capacity()*2);
            }
        }
        else
        {
            reserve(capacity() * 2);
        }
    }
    vector<T>::iterator i = begin() + index;
    for (iterator pos=end()-1; pos!=i; --pos)
    {
        *pos = *(pos-1);
    }
    elem[index] = v;
    size_v++;
    return &elem[index];
}

/******************************************
 *  FUNCTION ERASE (single element)
 *
 * description:
 *****************************************/
template<class T>
T* vector<T>::erase(iterator p)
{
    if (size_v == 0)
    {
        return p;
    }
    if (p == end())
    {
        return p;
    }
    else
    {
        for (iterator pos=p+1; pos!=end(); pos++)
        {
            *(pos-1) = *pos;
        }
        delete (end()-1);
        size_v--;
        return p;
    }
}

#endif // VECTOR_H
