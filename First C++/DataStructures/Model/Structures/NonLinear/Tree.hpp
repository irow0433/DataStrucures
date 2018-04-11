//
//  Tree.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 3/27/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include "../../Nodes/BinaryTreeNode.hpp"
#include <stdio.h>
template <class Type>
class Tree{
protected:
    BinaryTreeNode<Type> * root;
public:
    //info methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //data methods
    virtual void insert(Type data) = 0;
    virtual bool contains(Type data) = 0;
    virtual void remove(Type data) = 0;
    //traversals
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
}

#endif /* Tree_hpp */
