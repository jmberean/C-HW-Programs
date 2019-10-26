/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         10/31/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 8
 Section 5.1 Programming Q1,Q2,Q3,Q4
 
 1.  Write a while loop that displays each integer from 1 to 5 together with its square and cube.
 Display all three values for each integer on a separate line.
 
 */

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int squareResult;
    int cubedResult;
    
    n = 1;
    
    squareResult = 1;
    cubedResult = 1;
    
    while (n <= 5)              // while loop - while the number the user entered is less then or equal to 5, loop the sequence
    {
        cout << n;              // display the number
        
        squareResult = n * n;   // square the number
        
        cout << " " << squareResult;
        
        cubedResult = n*n*n;    // cube the number
        
        cout << " " << cubedResult;
        
        cout << "\n\n";
        
        n=n+1;
    }
    
    return 0;
}