//
//  ABLTree.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 4/17/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef ABLTree_hpp
#define ABLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent, Type value);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type>* parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};

template <class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * node){
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftNode());
    int rightHeight = this->calculateHeight(node->getRightNode());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
BinaryTreeNode<Type> * AVVLTree<Type> :: rightRotation (BinaryTreeNode<Type> * parent){
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode;
    
    parent->setRightChild(changedNode->getLeftNode());
    
    changedNode->setLeftChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightLeftRotation (BinaryTreeNode<Type> * parent){
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode();
    
    parent->setRightChild(leftRotation(changedNode));
    
    return rightRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation (BinaryTreeNode<Type> * parent){
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftNode();
    
    parent->setLeftChildd(rightRotation(changedNode));
    
    return lefRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent){
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1){
        if(heightDifference(parent->getLeftNode()) > 0){
            parent = leftRotation(parent);
        }
        else{
            parent = leftRightRotation(parent);
        }
    }
    else if(balanceFactor < -1){
        if(heightDifference(parent->getRightNode()) > 0){
            parent = rightLeftRotatiton(parent);
        }
        else{
            parent = rightRotation(parent);
        }
    }
    
    return parent;
}

tempalte <class Type>
BinaryTreeNode<Type> *AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted){
    if(parent == nullptr){
        return parent;
    }
    if(inserted < parent->getNodeData()){
        parent->setLeftChild(removedNode(parent->getLeftNode(), inserted));
    }
    else if(inserted > parent->getNodeData()){
        parent->setRightChild(removeNode(parent->getRightNode(), inserted));
    }
    else{
        BinaryTreeNode<Type> * temp;
        if(parent->getleftNode() == nullptr && parent->getRightNode() == nullptr){
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftNode() == nullptr){
            *parent = *parent->getRightNode();
        }
        else if(parent->getRightNode() == nullptr){
            *parent = *parent->getLeftNode();
        }
        else{
            binaryTreeNode<Type> * leftMost == this->getLeftMostChild(parent->getRightlNode());
            parent->setNodeData(leftMost->getNodeData());
            parent->setRightChild(removeNode(parent->getRightNode(),LeftMost->getNodeData()));
        }
    }
    
    if(parent == nullptr){
        return parent;
    }
    
    return balanceSubTree(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted){
    if(parent === nullptr){
        parent = new BinaryTreeNoode<Type>(inserted);
        return parent;
    }
    else if(inserted < parent->getNodeData()){
        parent->setLeftChild(insertedNode(parent->getLeftNode(), inserted));
        parent = balanceSubTree(parent);
    }
    else if(inserted > parent->getNodeData()){
        parent->setRightChild(insertNode(parent->getRightNode(), inserted));
        parent = balanceSubTree(parent);
    }
    return parent;
}

template <class Type>
void AVLTree<Type> :: insert(Type item){
    insertNode(this->getRoot(), item);
}

template <class Type>
void AVLTree<Type> :: remove(Type item){
    removeNode(this->getRoot(), item);
}

#endif /* ABLTree_hpp */
