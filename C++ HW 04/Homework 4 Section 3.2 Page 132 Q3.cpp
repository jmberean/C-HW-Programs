/*
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/28/2015
 Homework 4
 
 Section 3.2 Page 132 Q3

3. Write a program that prompts the user for the lengths of two sides of a
triangle and the angle between them (in degrees) and calculates the
length of the third side. 

Formula = a^2 + b^2 = c^2   */

// file: Homework 4 Section 3.2 Page 132 Q3.cpp
/*  This program will allow you the user to enter the lengths of two sides of a triangle
    and the angle between them (in degrees) to calculate the length of the third side.*/

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
    
    // constants are expressions with a fixed value.
    
    float a;        // Side a
    float b;        // Side B
    float c;        // Side c
    float alpha;    // Angle in degrees
    
    float const PI = 3.1514;    // PI = 3.1514...
   
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    // cout << - Standard output stream.
    // cin >> - Standard input stream.
    // \n - Ends line
    
    cout << "This program will allow you the user to enter the lengths of two sides of a triangle \n"        // We inform the user what the program is design to execute.
    "and the angle between them (in degrees) to calculate the length of the third side.\n\n";

    cout << "Please enter the length of the first side of the triangle: ";      // We request the user the user to enter the length of the first side of the triangle.
    
        cin >> b;           // The user enters the length of the first side of the triangle.
    
            cout << "\n\n";
    
    cout << "Please enter the length of the second side of the triangle: ";     // We request the user to enter the length of the second side of the triangle.
    
        cin >> c;           // The user enters the the length of the second side of the triangle.
    
            cout << "\n\n";
    
    cout << "Please enter the angle ( in degrees ): ";                          // We request the user to enter the angle ( in degrees ).
    
        cin >> alpha;       // The user enters the angke ( in degrees )
    
            cout << "\n\n";
    
    a = sqrt(pow(b,2) + pow(c,2) - 2 * b * c * cos(alpha * PI / 180.0));        // Formula for calulating the third side of the triangle.

    cout << "The length of the third side is: " << a;                           // We inform the user of the length of the third side of the triangle.
    
    cout << "\n\nThank you and have a nice day!";           // Communicating with the user improves the users ergonomic experience.
    
    return 0;   // Closes program, no errors.
}            // } Closes function.