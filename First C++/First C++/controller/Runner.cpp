//
//  Runner.cpp
//  First C++
//
//  Created by Rowlette, Isaac on 1/23/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#include <iostream>
#include "Controller.hpp"

int main()
{
    Controller * app = new Controller;
    
    (*app).start();
    
    app->start();
    
    return 0;
}
