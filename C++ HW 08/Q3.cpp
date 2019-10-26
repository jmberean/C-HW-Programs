/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/17/2015
 
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 8
 Section 5.1 Programming Q1,Q2,Q3,Q4
 
 3. Write a program fragment that displays a string
 
 two times on line 1,
 four times on line 2,
 six times on line 3, and so on
 
 */

#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.

#include <cmath>                // Header <cmath> declares a set of functions to compute common mathematical operations and transformations.

using namespace std;            // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    //  Declaration statements - declaring the data the function needs.'
    
    string d;
    
    cout << "Please enter string: ";
    
    cin >> d;
    
    int a;
    int b;
    
    a = 0;
    b = 0;
    
    while(a < 5)
    {
        b = 0;
        
        while(b < 2 * a+2)
        {
            cout << " " << d;
            b = b+1;
        }
        
        cout << "\n\n";
        a = a+1;
    }
    
    system ("pause");
    
    return 0;
}
