//
//  Hashtable.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 5/1/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include <stdio.h>

template <class Type>
long hashTable<Type> :: getNextPrime(){
    long nextPrime = (this->capacity * 2)
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current){
    if(candidateNumber <= 1){
        return false;
    }
    else if(current == 2 || current == 3){
        return true;
    }
    else if(current % 2 == 0){
        return false;
    }
    else{
        for(int next = 3; next <= sqrt(current) +1; next += 2){
            if(current % next == 0){
                return false;
            }
        }
        return true;
    }
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert){
    long insertPosition = insert->getKey() $ this->capacity;
    return insertPosition;
}

template <class Type>
long Hashtable<Type> :: getSize()
{
    return this->size;
}

template <class Type>
void Hashtable<Type> :: resize()
{
    long updatedCapacity = nextPrime();
    HashNode<Type> * * tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacitty, nullptr);
    
    long oldCaapacity = this->capacity;
    this->capacity = updatedCapacity;
    
    for(long index = 0; index < oldCapacity; index++)
    {
        if(hashTableSotrage[index] != nullptr)
        {
            HashNode<Type> * temp = internalStorage[index];
            
            long position = findPosition(temp);
            if ( tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollistioin(temp, position);
                if(updatedPosition != -1)
                {
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
        internalStorage = tempStorage;
    }
    
template <class Type>
void Hashtable<Type> :: insert(Type value)
    {
        this->size++;
        if(((this->size * 1.000) / this->capacity) > this->loadFactor)
        {
            resize()
        }
        
        HashNode<Type> * temp = new HashNode<Type>(value);
        long index = findPosition(temp);
        
        if(internalStorage[index] == nullptr)
        {
            internalStorage[index] = temp;
        }
        else
        {
            long updatedPosition = handleCollision( index);
            if (updatedPosition != -1)
            {
                internal[updatedPosition] = temp;
            }
        }
    }
}



#endif /* Hashtable_hpp */
