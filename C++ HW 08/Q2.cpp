/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         10/31/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 8
 Section 5.1 Programming Q1,Q2,Q3,Q4
 
 2. Write a program fragment that produces the output below.
 
 Hint: If n is the number in the first column,
 
 the number in the second column is 2 to the power n.
 
 0 1
 1 2
 2 4
 3 8
 4 16
 5 32
 6 64
 
 
 */

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    
    int n1;
    int n2;
    
    
    n1 = 0;
    n2 = 0;
    
    while (n1 <= 6)
    {
        n2 = pow(2,n1);
        
        cout << n1 << " " << n2 << "\n\n";
        
        n1++;
    }
    
    return 0;
}