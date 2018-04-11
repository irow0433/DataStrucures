//
//  Runner.cpp
//  QuickCPlusPlus
//
//  Created by Rowlette, Isaac on 1/25/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

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

void Controller :: usseVector
{
    vector<int> numbers;
    
    numbers.push_back(specialNumber);
    cout << "The size of my vector is: " << numbers.size() << endl;
    numbers
 }



