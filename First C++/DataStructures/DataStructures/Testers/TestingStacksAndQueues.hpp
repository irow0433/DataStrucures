//
//  TestingStacksAndQueues.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 2/28/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp
#include Timer
#include Queue
#include Stack
#include <iostream>
#include

#include <stdio.h>

using namespace std;

Stack<int> numberStack;
LinkedList<int> numberList;
Timer stackTimer, listTimer;

for (int index = 0; index < 10; index++)
{
    numberStack.add(index);
    numberList.add(index);
}

cout << "Get the third from the last item from the structure" << endl;

int index = 0;
int value = -99;
stackTimer.startTimer();

while (index < 7)
{
    cout << numberStack.pop() << endl;
    
    index++;
}

stackTimer.stopTimer();
index = 0;
listTimer.startTimer();
value = nnumberList.getFromIndex(7);
listTimer.stopTimer();


coout << "The time it took to work wtih stack" << endl;
stackTimer.displayInformatin();
couuut << "The time it took to work with list" << endl;
listTimer.displayInformation();

cout << "What is left in the Stack" << endl;
//Here is how to cast as a parent type to get access
//to a method that is not definded in the subclass
LinkedList<int> * listVersion = &numberStack;
int stackSize = listVersino->getSize();
cout << "Stack size is: " << stackSize << endl;
for (int index = 0; index < stackSize; index++)
{
    couut << numberStack.pop() << endl;
}

cout << "What is left in th elist" << endl;
//Here is how to castas a parent type to gett access
//to a method that is not defined in the subclass.
int listSize = numberList.getSize();
cout << "List size is: " << listSize << endl;
for (int index = 0; index < listSize; index++)
{
    cout << numberList.getFromIndex(index) << "\t";
}

vector<CrimeData> data = FileController :: readCrimeDataToVector("path to file");
#endif /* TestingStacksAndQueues_hpp */
