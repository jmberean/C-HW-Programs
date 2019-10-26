/*
John m Berean 
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++ 

HW 02 Page 110 Q 5 - 09/17/15
    
    5.  Write a program that reads in the length and width of a rectangular
        yard (in meters) and the length and width of a rectangular house (in meters) placed in the yard. 
        Your program should compute the time (in minutes) required to cut the lawn around the house. 
        Assume the mowing rate in square meters per minutes is entered as a data item. */
        
// This program will compute the time (in minutes) required to cut the lawn around the house.

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std;
                                // as defined by C++ standard library.

int main()                      /*  Exactly one main function per program.
                                    A function is a collection of related statements that perform a specific operation.
                                    int indicates the return/data type of the function.
                                    (  ) indicates no special information passed to the function by the operating system.
                                    program starts at main function. */
                                
{                               // { opens the main function.
    
    //  declaration statement - declaring the data the function needs.
    
    float l, w, mowArea, mowRate, time;            //  declaring the variable l, w, area, mowRate and time as float data types
    
    cout << "Hello! This program will compute the time (in minutes) required to cut the lawn around a house! \n\n";     // informing the user what the proram is designed to do
    
    cout << "Please enter the length of the yard ( in meters ): ";          // requesting the user to enter the length of the lawn in meters.
        cin >> l;                                                       // user enters the length.
        
    cout << endl;    // skips line.
        
    cout << "Please enter the width of the yard ( in meters ): ";           // requesting the user to enter the width of the lawn the in meters.
        cin >> w;                                                       // user enters the width.
        
    cout << endl;   // skips line.
            
    mowArea = l*w;     // formula the program uses to calculate the area of the house by multiplying the length and width.
    
    cout << "Please enter the rate at which you are mowing (in square meters per minute): ";        // request the user to enter the rate at which they are mowing their lawn in meters per minute.
                                                                                                    // basically how many square meters are they mowing every minute.
        
        cin >> mowRate;                 // user enters the rate at which they are mowing in square meters per minute.                                                                         
   
   time= mowArea/mowRate;           // formula the program will use to calculate the time it takes in minutes to mow the lawn relative to the data entered by the user.
   
   cout << endl;    
   
   cout << "The time (in minutes) required to cut the lawn around the house is: " << time;      // we read out to the user the time (in minutes) required to cut the lawn around the house
   
return 0;       // ends program
}               // closes function