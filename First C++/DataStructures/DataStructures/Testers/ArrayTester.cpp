//
//  ArrayTester.cpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 2/6/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#include "ArrayTester.hpp"

void ArrayTester :: testArrayUse()
{
    Array<int> firstArray(10);
    
    for (int index = 0; index < 10; index++)
    {
        firstArray.getAtIndex(index, index)
    }
    
    for (int index = 0; index < firstArray.getSize(); index++)
    {
        std::cout << firstArrayy[index] << endl;
    }
    
    Array<int> secondArray(400);
    
    cout << secondArray.getsize() << endl;
    cout << firstArray.getsize() << endl;
    
    Array<int> thirdArray(secondArray)
    
    cout << thirdArray.getsize() << endl;
    firstArray = thirdArray;
    cout << firstArray[4] << endl;
    
    thirdArray[5] = 123;
    cout << firstArray[5] << endl;
}

void ArrayTester :: testAdvancedArray()
{
    
}
