//
//  Node.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 2/20/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#include "ArrayTester.hpp"

using namespace std;

void ArrayTester :: testArray()
{
    Array<int> firstArray(10);
    
    for (int i = 0; i < 10; i++)
    {
        firstArray.setAtIndex(i, i);
    }
    
    for (int i = 0; i < firstArray.getSize(); i++)
    {
        cout << firstArray[i] << endl;
    }
    
    Array<int> secondArray(400);
    Array<int> thirdArray(secondArray);
    
    cout << firstArray.getSize() << endl;
    cout << secondArray.getSize() << endl;
    cout << thirdArray.getSize() << endl;
    
    thirdArray[5] = 123;
    cout << thirdArray[5] << endl;
    
    
}
void ArrayTester :: testAdvancedArray()
{
    
}

