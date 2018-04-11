//
//  List.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 2/2/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef List_hpp
#define List_hpp
#include <stdio.h>
#include

template <class Type>
class template
{
protected:
    int size:
public:
    virtual void add(Type item ) = 0;
    virtual void assAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    
    virtual int getSize
    virtual linearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
}

#endif /* List_hpp */
