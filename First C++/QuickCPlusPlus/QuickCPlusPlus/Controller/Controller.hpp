//
//  Controller.hpp
//  QuickCPlusPlus
//
//  Created by Rowlette, Isaac on 1/25/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

//if and define need to be unique
#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>

class Controller
{
private:
    //data members and hleper methods
protected:
    //Things that need to only be used by subclasses
public:
    //Anyone can see this.
    Controller();
    void start();
    void array();
};



#endif /* Controller_hpp */
