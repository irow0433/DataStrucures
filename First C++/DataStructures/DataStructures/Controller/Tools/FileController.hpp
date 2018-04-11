//
//  FileController.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 1/31/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

using namespace std;

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
}

#endif /* FileController_hpp */
