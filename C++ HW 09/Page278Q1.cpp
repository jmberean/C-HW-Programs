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
 
 Section 5.3 Page 278 Programming Q1.)
 
 1. Write a loop that displays a table of angle measures along with their sine and cosine values.
 Assume that the initial and final angle measures (in degrees) are available in initDegree and finalDegree (type int variables),
 and that the change in angle measure between table entries is given by stepDegree (also a type int variable).
 
 Remember that the cmath library’s sin and cos functions take arguments that are in radians. Write this loop using a for statement and a while statement.
 
 */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int initDegree;
    int finalDegree;
    int stepDegree;
    
    cout << "Enter initial degree: ";
    
    cin >> initDegree;
    
    cout << "Enter final degree: ";
    
    cin >> finalDegree;
    
    cout << "Enter the change in angle measure: ";
    
    cin >> stepDegree;
    
    for (int i = initDegree;
         i <= finalDegree;
         i += stepDegree )
        
    {
        cout << setw(5) << i << setw(15) << cos(i*(M_PI/180)) << setw(25) << sin(i*(M_PI/180)) << "\n";
    }
    
    /*
     
     Form: for (initialization expression;
     test / loop repetition condition;
     update expression)
     
     statement;
     
     Example: // Display N asterisks.
     
     for (countStar = 0;
     countStar < N;
     countStar += 1)
     
     cout << '*';
     
     */
    
    return 0;
}

