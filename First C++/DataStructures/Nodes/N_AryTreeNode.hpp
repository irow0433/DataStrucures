//
//  N_AryTreeNode.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 4/23/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef N_AryTreeNode_hpp
#define N_AryTreeNode_hpp

#include <set>
#include "Node.hpp"
using namespace std;

template <class Type>
class N_AryTreeNode : public Node<Type>
{
private:
    std::set<N_AryTreeNode<Type>*> nodes;
    N_AryTreeNode<Type> * root;
    
public:
    N_AryTreeNode<Type>();
    ~N_AryTreeNode<Type>();
    N_AryTreeNode<Type>(Type data);
    
    std::set<N_AryTreeNode<Type>*> getNodes();
    N_AryTreeNode<Type> * getRoot();
    int getChildCount();
    
    void setRoot(N_AryTreeNode<Type> * root);
    void addChild(Type data);
};

template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode()
{
    //unused
}

template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode(Type data) : Node<Type>(data)
{
}

template <class Type>
N_AryTreeNode<Type> :: ~N_AryTreeNode()
{
    for (typename std::set<N_AryTreeNode<Type> *> ::iterator iter = nodes.begin(); iter != nodes.end(); iter++)
    {
        nodes.erase(iter);
        iter--;
    }
}

template <class Type>
N_AryTreeNode<Type> * N_AryTreeNode<Type> :: getRoot()
{
    return root;
}

#endif /* N_AryTreeNode_hpp */
