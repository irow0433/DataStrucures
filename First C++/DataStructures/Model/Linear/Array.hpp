//
//  Array.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 2/2/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef Array_hpp
#include <assert.h> //Used or validating user supplied data.
#include <iostream> //Used for tracing and debug statements
#include <stdio.h>
#define Array_hpp

using namespace std; //used for keyword access.

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromInex(int index);
    void setAtIndex(int index, Type data);
}

template <class Type>
Array<type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    //Buildd data structure
    internalArray = new Type[size];
    
    for(int index = 0; index < size; index++)
    {
        internalArray[index] =toCopy[index];
    }
}

template <class Type>
Array<Type> :: ~Array()
{
    delete [] internalArray;
}

template <class Type>
Array<Type> & Array<Type> :: opetor = (const Array<Typ> & toAssign)
{
    if (&toAssig != this)
    {
        if (size != toAssin.getSize())
        {
            delete [] internalArray;
            size = toAssign.getSize();
            internalArray = new Type[size];
        }
        
        for (int index = 0; index  size; index++)
        {
            internalArray[index] = toAssign[index;]
        }
        
    }
    return *this;
            
}

template <class Type>//Left hand of = sign -- assigns to reference
Type Array<Type> :: operator [] (int index) cont
{
    assert(inde >= 0 && index < size);
    return internalArray[index];
}

template <class Type>//Right hand of = sign -- copy
int Array<Type> :: get size() const
{
    return size;
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    asert(index >=0 && index < ize);
    
    type value = internalArray[index];
    
    return value;
}

template <class Type>
{
    cout << "About to delte the structure" << endl;
    delete [] internalArray;
    cout << "Internal array deleted" << endl;
}

template <class Type>
void Array<Type> :: setAtIndex(int pos, Type item)
{
    assert(pos >= 0 && pos < size);
    internalArry[pos] = item;
}
#endif /* Array_hpp */
