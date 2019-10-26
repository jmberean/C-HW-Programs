/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/17/2015
 
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 8
 Section 5.1 Programming Q1,Q2,Q3,Q4
 
 4. Write a function powerOfTwo with a parameter n
 
 that uses a loop to compute 2^n and returns its value.
 
 */

#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.

#include <cmath>                // Header <cmath> declares a set of functions to compute common mathematical operations and transformations.

using namespace std;            // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

int powerOfTwo (int);

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    //  Declaration statements - declaring the data the function needs.
    
    float n;
    
    cout << "Hello! This program computes 2^n and returns its value.";
    
    cout << "\n" << "Please enter n: ";
    
    cin >> n;
    
    cout << "\n" << "2 to the power of " << n << " = " << powerOfTwo(n);
    
    return 0;
    
}

int powerOfTwo (int n)
{
    int c;
    int result;
    
    c = 0;
    
    result = 1;
    
    while (c < n)
        
    {
        result = result * 2;
        
        c = c + 1;
    }
    
    return result;
}