//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 2/20/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp

#include <stdio.h>
#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
public:
    //Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};
/**
 This constructor is for before the values are known
 */
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}
/**
 This constructor makes a reference to an instance with data
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

/**
 This constructor makes a reference to an instance with data and a known link
 */
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

//Accessor methods

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this->next = nextNodePointer;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}
//jkjfkldsajlkfjlkdsajlkf;jadls;kjflkdasjlk;fjklasjkfjdklsjfkljdsakljfjdksaakl;fjdsasaklfjkdsakljfkdsjfkl;dsjakfjkldsajaf;ldsasjfkdsjfkldjdaskfjk;adsjflkdjaasfjdsakflkdjsaklfjdklsjfkldsjalfkjdksaljfkljdsaklfjldksajflkdsakajfklsadjfklsdjfklsdjklfjklddjsfdasjfkdajsfjklsaddjfkl;dsajflkkjadsfjkaldsfjkldsajflkdasjddflkjfkldfdjdklsajfkldsjaklfjsadlfjfjdsklajflkdasjfklas I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.I am just doinng this so I can commit something.



#endif /* LinearNode_hpp */
