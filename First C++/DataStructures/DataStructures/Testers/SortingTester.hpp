//
//  SortingTester.hpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 3/15/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <iostream>
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"

class SortingTester{
private:
    void quickSorrt(vector<CrimeData> data, int low, int high);
    int partition(vector<CrimeData> data, int low, int high);
    void swap(vector<CrimeData> info, int small, int large);
public:
    void testSorts();
};

#endif /* SortingTester_hpp */
