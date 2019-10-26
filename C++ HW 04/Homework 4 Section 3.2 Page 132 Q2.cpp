/*
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/28/2015
 Homework 4
 
 Section 3.2 Page 132 Q2
 
    2.      Write a complete program that prompts the user for the Cartesian coor-dinates of two points (x1, y1) and (x2, y2)
            and displays the distance between them computed using the following
 
 formula: distance = sqrt (x1 - x2)2 + (y1 - y2)2 */

// file: Homework 4 Section 3.2 Page 132 Q2.cpp
/*  This program will prompt the user for the Cartesian coor-dinates of two points (x1, y1) and (x2, y2)
 and displays the distance between them computed using the following */

#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.
// Header <iostream that defines the standard input/output stream objects.

#include <cmath>            // Header <cmath> declares a set of functions to compute common mathematical operations and transformations.

using namespace std;        // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    //  Declaration statements - declaring the data the function needs.
    
    // float return data type: real numbers.
    
    float x1;           // Numerical coordinate point (x1).
    float y1;           // Numerical coordinate point (y1).
    float x2;           // Numerical coordinate point (x2).
    float y2;           // Numerical coordinate point (y2).
    float distance;     // Distance between the Cartesian coor-dinates of two points.
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    // cout << - Standard output stream.
    // cin >> - Standard input stream.
    // \n - Ends line
    
    cout << "Hello! This program will read in the Cartesian coor-dinates of two points (x1, y1) and (x2, y2)\n"     // We inform the user what the program is designed to do.
    "and display the distance between them.\n\n";
    
    
    cout << "Please enter the value for x1: ";              // We request the user to enter the value for the x1 coordinate point.
    
        cin >> x1;                                  // User enters the value for the x1 coordinate point.
    
            cout << "\n";
    
    
    cout << "Please enter the value for y1: ";              // We request the user to enter the value for the y1 coordinate point.
    
        cin >> y1;                                  // User enters the value for the y1 coordinate point.
    
            cout << "\n";
    
    
    cout << "Please enter the value for x2: ";              // We request the user to enter the value for the x2 coordinate point.
    
        cin >> x2;                                  // The user enters the value for the x2 coordinate point.
    
            cout << "\n";
    
    
    cout << "Please enter the value for y2: ";              // We request the user to enter the value for the x1 coordinate point.
    
        cin >> y2;                                  // The user enters the value for the y2 coordinate point.
    
            cout << "\n";
    
    
    // Formula: distance = sqrt (x1 - x2)2 + (y1 - y2)2
    
    distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2));           //  Formula the program will use to calculate the distance between the two Cartesian coordinate points.
    
    
    cout << "The distance between the Cartesian coor-dinates of points (x1, y1) and (x2, y2) is: " << distance << "\n\n";       // We output the distance to the user via computer screen.
    
        cout << "Thank you and have a nice day!";           // Communicating with the user improves the users ergonomic experience.
    
    return 0;   // Closes program, no errors.
}            // } Closes function.