//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 3/27/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include <iostream>
#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
    
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
