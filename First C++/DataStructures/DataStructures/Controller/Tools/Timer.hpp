//
//  Timer.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 1/31/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <iostream>

#endif /* Timer_hpp */

class Timer
{
private:
    clock_t executionTime;

public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
    
};
