/*
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         10/31/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 9
 
 Section 5.2 Page 270 Q1
 Section 5.3 Page 278 Programming Q1, Q2, Q3
 Section 5.4 Page 285 Programming Q1, Q2
 
 Page 324 Q3, Q4
 
 Section 5.2 Page 270 Q1.)
 
 Write a loop that produces the output below
 (hint: each number in the right column is the sum of all values in the left column up to that point):
 
 i  sum
 
 0  0
 1  1
 2  3
 3  6
 4  10
 5  15
 6  21
 */

// file: Section 5.2 Page 270 Q1
//

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int sum;
    
    sum = 0;
    
    for (int i = 0;
         i < 7;
         i++)
    {
        sum += i;
        
        cout << i << " " << sum << "\n";
    }
    
    return 0;
}
