//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 2/2/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//
#inlcude "List.hpp"

#ifndef LinkedList_hpp
#define LinkedList_hpp

using namespace std;

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class Linked : public List<Type>
protected:

LinearNode<Type> * front;
LinearNode<Type> * end;

public:
LinkedList();
virtual LinkedList();
virtual void add(Type item);
virtual void addAtIndex(int index, Type item);
virtual Type getFromIndex(int index);
virtual Type remove(int index);
int getSize() const;
LinearNode<Type> * getFront();
LinearNode<Type> * getEnd();

void add(Type item);
void addAtIndex(int index, Type item);
Type getFromIndex(int index);
Type remove(int index);

Linked<Type> :: LinkedList()
{
    this-> = nullptr;
    this-> = nullptr;
    this-> = 0;
}

LinkedList<Type> :: LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStucture->getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}

void LinkedList<Type> :: add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    
    this->size += 1;
}

void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNOde<Type>(item);
        if (index == 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for (int position = 0; position < index; position++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}

Type LinkedList<Type> :: getFromINdex(int index)
{
    assert(index >= 0 && index < this-> size);
    Type data;
    
    LinearNode<Type> * current = front;
    
    for (int position = 0; position < index; position++)
    {
        current = current->getNextNode();
    }
    
    data = current->getData();
    
    return data;
}

Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->size);
    
    LinearNode<Type> * current = front;
    LinearNode<Type> *toBeRemoved = nullptr;
    LinearNode<Type> * previous = nullptr;
    
    Type removedData;
    
    if (index == 0)
    {
        toBeRemoved= front;
        this=>front = this->front->getNextNode();
    }
    else
    {
        for (int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextNode();
        }
        
        toBeRemoved = current;
        
        if (index == this->size -1)
        {
            previous->setNextNode(nullptr);
            end previous;
        }
        else
        {
            current = toBeRemoved->getNextNode();
            previous->setNextNode(current);
        }
    }
    this->size -= 1;

    removedData = toBeRemoved->getNextNode();
    delete toBeRemoved;
    return removedData;
}

LindearNode<Type> * LinkedList<Type> :: getEnd()
{
    return this->end;
}

LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this->front;
}

int LinkedList<Type> :: getSize() const
{
    return this->size;
}
#endif /* LinkedList_hpp */
