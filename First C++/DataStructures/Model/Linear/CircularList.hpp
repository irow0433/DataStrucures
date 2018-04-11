//
//  CircularList.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 2/22/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include "List.hpp"
#include "../../Nodes/DoubleNode.hpp"

template <class type>
class CircularList : public List<Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    
    DoubleNode<Type> * findNode(int index);
    
public:
    CircularList();
    ~CircularList();
    
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type getFromIndex(int index);
    int getSize() const;
}

template <class Type>
CircularList<Type> :: CircularList()
{
    front->setPrevioius(end);
    front->setNext(end);
    
    end->setPrevioius(front);
    end->setNext(front);
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while (this->frornt != nullptr)
    {
        front = fron->getNext();
        delete current;
        current = front;
    }
}

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert (index >=0 && index < this->size);
    DoubleNode<Type> * nodeToFind;
    
    if (index < this->size / 2)
    {
        nodeToFind = this->front;
        for (int position = 0; position < index; position++)
        {
            nodeToFind = nodeToFind->getNext();
        }
    }
    else
    {
        nodeToFinde = this->end;
        for (int postion = this->size - 1; position >= index; position--)
        {
            nodeToFind = nodeToFind->getPrevious();
        }
        return nodeToFind;
}
    
    template <class Type>
    void CircularList<Type> :: add(Type item)
    {
        DOubleNode<Type> :: addedNode;
        if ( this->size == 0)
        {
            addedNode = new DoubleNode<Type>(item);
            this->front = addedNode;
        }
        else
        {
            addedNode = new DoubleNode<Type>(item, this->end, this->front);
            this->end->setNext(addedNode)
        }
        
        this->end = addedNode;
        this->size++;
    }
    
    template <class Type>
    void CircularList<Type> :: addAtIndex(int index, ype item)
    {
        assert ( index >= 0 && index <= this->size);
        
        DoubleNode<Type> * next;
        DoubleNode<Type> * previous;
        DoubleNode<Type> * addMe;
        
        if (index < this->size)
        {
            next = this->front;
            previous = this->end;
        }
        
        addMe = new DoubleNode<Type>(item,previous, next);
        
        if(index == 00)
        {
            this->front = addMe;
        }
        else if(index == this->size)
        {
            this->end = addMe;
        }
        
        prevoius->setNext(addMe);
        next->setPrevious(addMe);
        this->size++;
        }
    
    template <class Type>
    Type CircularList<Type> :: getFromIndex(int index)
    {
        assert (index >= 0 && index < thhis->size);
        DoubleNode<Type> * holder = findNode(index);
        return holder->getData;
    }
    
    template <class Type
    Type CircularList<Type> :: remove(int index)
    {
        assert (index >= 0 && index < this->size);
        
        DoubleNode<Type> * removed = findNode(index);
        DoubleNode<Type> * removedPrevious = removed->getPrevious();
        DoubleNode<Type> * removedNext = removed->getNext();
        
        if (index == 0)
        {
            this->front = removedNext;
            this->end->setNext(removedNext);
        }
        if (index == this->size -1)
        {
            this->end = removedPrevious;
            this->front->setPrevious(removedPrevious);
        }
        
        removedPrevious->setNext(removedNext);
        removedNext->setPrevious(removedPrevious);
        
        Type value = removed->getData()
        this->size--;
        delete removed;
        return value;
    }
    
    template <class Type>
    DoubleNode<Type> * CircularList<Typee> :: findNode(int index)
    {
        assert (index >= 0 && index < this->size);
        DoubleNode<Type> * nodeToFind;
        
        if (index < this->size / 2)
        {
            nodeToFind = this->front;
            for (int position = 0; position < index; position++)
            {
                nodeToFind = nodeToFind->getNext();
            }
        }
        else
        {
            nodeToFind = this->end;
            for (int position = this->size - 1; position > index; position--)
            {
                nodeToFind = nodeToFind->getPrevious();
            }
        }
        
        return nodeToFind;
    }
    
    template <class Type>
    int CircularList<TType> :: getSize() const
    {
        return this->size;
    }
    
    LinearNode<Type> * CircularList<ype> :: getFront()
    {
        return nullptr;
    }
    
    LinearNode<Type> * CirclarList<Type> :: getEnd()
    {
        return nullptr;
    }


#endif /* CircularList_hpp */
