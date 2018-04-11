//
//  Controller.cpp
//  QuickCPlusPlus
//
//  Created by Rowlette, Isaac on 1/25/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

// scope resolution opportier explains the thing on the right hand side belongs to the left hand side
// or is used to define a function outside a class one. or the other XD
//using scope resolution operator :: when there is a local variable with the same name

#include "Controller.hpp"
#include "iostream"

using namespace std;
//std stands for standard
Controller :: Controller()
{
    
}

//angle brackets work like a plus sign
// cout is an input and output for example
// cout << "Output sentence"; prints output sentence on screen
// cout <<120; prints number 120 on screen

void Controller :: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This loop has executed" << index + 1 << " times" << endl;
    }
    
}

//the for part of the array means "enters the loop until the element a[i] gets 0;

void Controller :: array()
{
    int FirstArray [5] = {1, 3, 5, 7, 9};
    for(int i= 0; i<sizeof(FirstArray)/sizeof(*FirstArray); i++)
    {
        cout << FirstArray[i] << endl;
}


void Controller :: Hw()
    {
    String name = "Isaac Rowlette"
    cout << "My name is Isaac Rowlette" << name << endl;
    cout << " the address of the strin gname is" << name << "." << endl;
    for (int i = 0; i < 10; i++)
    {
         cout << i << endl;
    }
}
#include "Controller.hpp"
    
    using namespace std;
    
    ////int main is a way to get info back to the runner giving info for why it crashed
    //int main()
    //{
    //    Controller app;
    //    app.start();
    //}
    
    Controller :: Controller()
    {
        this->specialNumber = 9865;
        this->favoriteWord = "Sporker";
        
    }
    
    void Controller :: start()
    {
        for (int index = 0; index < 10; index++)
        {
            cout << "This loop has executed " << index
            + 1 << " times" << endl;
        }
    }
    
    
    
    void Controller :: useVector()
    {
        vector<int> numbers;
        
        numbers.push_back(specialNumber);
        cout << "The size of my vector is: " << numbers.size() << endl;
        numbers
    }

}
