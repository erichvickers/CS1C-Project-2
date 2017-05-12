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
    void sortFunction(vector<T> list);
    bool comparator(T& a, T& b);
    ~vector() {delete [] elem;}						// destructor



    class bounds
    {
        bounds()
        {

        }
    };
};

/* COPY CONSTRUCTOR
 *
 * description:
 * takes in reference of another vector and
 * creates and entire new copy
 */
template<class T>
vector<T>::vector(const vector& source)
:size_v{source.size_v} , space{source.space} , elem{new T[source.space]}
{
    for (int i = 0; i < source.size_v; i++)
    {
        elem[i] = source.elem[i];
    }
}

/* OPERATOR= ASSIGNMENT OVERLOAD
 *
 * description:
 * overloads the assignment operator so that
 * the contents of the vector are properly
 * copied
 */
template<class T>
vector<T>& vector<T>::operator=(const vector& rhs)
{
    delete [] elem;
    size_v = rhs.size_v;
    space = rhs.space;
    elem = new T [space];
    for (int i = 0; i < rhs.size_v; i++)
    {
        elem[i] = rhs.elem[i];
    }
    return this;
}

/* MOVE CONSTRUCTOR
 *
 * description:
 */
template<class T>
vector<T>::vector(const vector&& source)
    :size_v{source.size_v} , space{source.space} , elem {nullptr}
{
    elem = source.elem;
    source.elem = nullptr;
    source.size_v = 0;
    source.space = 0;
}

/* OPERATOR= MOVE OVERLOAD
 *
 * description:
 */
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

template<class T>
T& vector<T>::operator[](int n)
{
    return elem[n];
}

template<class T>
void vector<T>::resize(int newsize)
{
    if (newsize >= size_v)
    {
        size_v = newsize;
    }
    else
    {
        T *tmp;
        for (int i = size_v-1; i > newsize-1; i--)
        {
            tmp = elem[i];
            delete tmp;
        }
    }
}

template<class T>
void vector<T>::push_back(T d)
{
    if (size_v >= space)
    {
        space = space*2;
    }
    else
    {
        elem[size_v] = d;
        size_v++;
    }
}

template<class T>
void vector<T>::reserve(int newAlloc)
{
    if (newAlloc < size_v)
    {
        this->resize(newAlloc);
    }
    space = newAlloc;
}

template<class T>
T* vector<T>::begin()
{
    vector<T>::iterator newIt = elem[0];
    return newIt;
}

template<class T>
T* vector<T>::begin() const
{
    vector<T>::const_iterator newIt = elem[0];
    return newIt;
}

template<class T>
T* vector<T>::end()
{
    vector<T>::iterator newIt = elem[size_v];
    return newIt;
}

template<class T>
T* vector<T>::end() const
{
    vector<T>::const_iterator newIt = elem[size_v];
    return newIt;
}

template<class T>
T* vector<T>::insert(iterator p, const T& v)
{
    resize(this->size()+1);
    vector<T>::iterator tmp = p;
    vector<T>::iterator tmp1 = p;

    T a = *p;

    for (vector<T>::iterator i = p; i!=end();i++)
    {

    }
}

template <class T>
void vector<T>::sortFunction(vector<T> list)
{
     sort(list.begin(), list.end(), comparator());

//     for (vector<int>::iterator it=list.begin(); it!=list.end(); ++it){

//     }
//     std::cout << ' ' << *it;
}

template <class T>
bool vector<T>::comparator(T & a, T & b)
{
    return a > b;
}

#endif // VECTOR_H
