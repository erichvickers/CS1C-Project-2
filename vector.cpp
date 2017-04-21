//#include "vector.h"

///* COPY CONSTRUCTOR
// *
// * description:
// * takes in reference of another vector and
// * creates and entire new copy
// */
//template<class T>
//vector<T>::vector(const vector& source)
//:size_v{source.size_v} , space{source.space} , elem{new T[source.space]}
//{
//    for (int i = 0; i < source.size_v; i++)
//    {
//        elem[i] = source.elem[i];
//    }
//}

///* OPERATOR= ASSIGNMENT OVERLOAD
// *
// * description:
// * overloads the assignment operator so that
// * the contents of the vector are properly
// * copied
// */
//template<class T>
//vector<T>& vector<T>::operator=(const vector& rhs)
//{
//    delete [] elem;
//    size_v = rhs.size_v;
//    space = rhs.space;
//    elem = new T [space];
//    for (int i = 0; i < rhs.size_v; i++)
//    {
//        elem[i] = rhs.elem[i];
//    }
//    return this;
//}

///* MOVE CONSTRUCTOR
// *
// * description:
// */
//template<class T>
//vector<T>::vector(const vector&& source)
//    :size_v{source.size_v} , space{source.space} , elem {nullptr}
//{
//    elem = source.elem;
//    source.elem = nullptr;
//    source.size_v = 0;
//    source.space = 0;
//}

///* OPERATOR= MOVE OVERLOAD
// *
// * description:
// */
//template<class T>
//vector<T>& vector<T>::operator=(const vector&& rhs)
//{
//    delete [] elem;
//    size_v = rhs.size_v;
//    space = rhs.space;
//    elem = rhs.elem;
//    rhs.elem = nullptr;
//    rhs.size_v = 0;
//    rhs.space = 0;
//    return this;
//}


//template<class T>
//const T& vector<T>::operator[](int n) const
//{
//    if (n >= 0 && n < size_v)
//    {
//        return elem[n];
//    }
//    else
//    {
//        return nullptr;
//    }
//}

//template<class T>
//T& vector<T>::operator[](int n)
//{
//    if (n >= 0 && n < size_v)
//    {
//        return elem[n];
//    }
//    else
//    {
//        return nullptr;
//    }
//}

//template<class T>
//void vector<T>::resize(int newsize)
//{
//    if (newsize >= size_v)
//    {
//        size_v = newsize;
//    }
//    else
//    {
//        T *tmp;
//        for (int i = size_v-1; i > newsize-1; i--)
//        {
//            tmp = elem[i];
//            delete tmp;
//        }
//    }
//}

//template<class T>
//void vector<T>::push_back(T d)
//{
//    if (size_v >= space)
//    {
//        return nullptr;
//    }
//    else
//    {
//        elem[size_v] = d;
//        size_v++;
//    }
//}

//template<class T>
//void vector<T>::reserve(int newAlloc)
//{
//    if (newAlloc < size_v)
//    {
//        this->resize(newAlloc);
//    }
//    space = newAlloc;
//}

//template<class T>
//vector<T>::iterator vector<T>::begin()
//{
//    vector<T>::iterator newIt = elem[0];
//    return newIt;
//}

//template<class T>
//const_iterator vector<T>::begin() const
//{
//    vector<T>::const_iterator newIt = elem[0];
//    return newIt;
//}

//template<class T>
//iterator vector<T>::end()
//{
//    vector<T>::iterator newIt = elem[size_v];
//    return newIt;
//}

//template<class T>
//const_iterator vector<T>::end() const
//{
//    vector<T>::const_iterator newIt = elem[size_v];
//    return newIt;
//}
