//
//  FileController.cpp
//  DataStructures
//
//  Created by Rowlette, Isaac on 1/31/18.
//  Copyright © 2018 Rowlette, Isaac. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exits at the path
    if (dataFile,is_open())
    {
        //deep reading until you are at the end of thee file.
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carraiage return character
            getLine(dataFile, currentCSVLine, '\r');
            //Exxclude headerr row
            if (rowCount != 0)
            {
                //create a CrimeData instance from the line.
                CrimeData row(currentCSVLine);
                crimeVector.push)_back(row);
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

