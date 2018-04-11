//
//  Controller.cpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 1/31/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#include "Controller.hpp"

using namespace std;


CrimeData :: CrimeData(string currentCSVLine)
{
    stringsream parseCSV(currentCSVLine);

    string department, tempPopulation, tempProperty, tempAssault, tempMurder, tempRape, tempBurglary, tempAllMotor, tempAllViolent

    getline(parseCSV, department, ',');
    getline(parseCSV, tempPoplation, ',');
    getline(parseCSV, tempProperty, ',');
}

void Controller :: start()
{
//    ArrayTester myTest;
//    myTest.testsArrayUse();
//    myTest.testAdvancedArray();
    
    RecursionTester test;
    test.testRecursionNumbers();
    
    
}
    
    
//    void Controller :: start()
//{
//    cout << "Testng the timer class" << endl;
//    Timer codeTimer;
//    codeTimer.stopTimer();
//    cout << "Print to the screen some text" << endl;
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//
//    codeTimer.resetTimer();
//    codeTimer.startTimer();
//
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector"/Users/irow0433/Documents/Swift/DataStrucures/First C++/DataStructures/DataStructures/Data/crime.csv";
//    for ( int index = 0; index < 100; index++)
//    {
//        cout << "The index is " << index << "\t";
//    }
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//}

void Controller :: findMaxAndMin()
{
    vector<CrimeData> myData = FileController :: readCrimeDataToVector"/Users/irow0433/Documents/Swift/DataStrucures/First C++/DataStructures/DataStructures/Data/crime.csv";
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++;)
    {
        if (myData [minIndex] < myData [index])
        {
            minIndex = index;
        }
        
        if (myData [maxIndex] > myData[index];
            {
                maxIndex = index;
            }
    }
            searchTimer.stopTimer();
            cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
            cout << " The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxInex] << endl;
            searchTimer.displayInformation();
                                                                                             
    
}
