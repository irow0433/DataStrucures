//
//  HashNode.cpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 4/27/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#include "HashNode.hpp"
template <class Type>
class HashNode : public Node<Type>
{
private:
    long key;
public:
    HashNode();
    HashNode(Type data);
    
    Type getData();
    long getKey() const;
    void setData(Type data);
};

template <class Type>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this->key = 0;
}

template <class Type>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this->key = (long) &data;
}

template <class Type>
long HashNode<Type> :: getKey() const
{
    return this->key;
}
