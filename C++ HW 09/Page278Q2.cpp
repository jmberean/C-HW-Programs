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
 
 Section 5.3 Page 278 Programming Q2.)
 
 2. Write a program to display a centimeter - to - inches conversion table.
 
 The smallest and largest number of centimeters in the table are input values.
 
 Your table should give conversions in 10-centimeter intervals. One inch equals 2.54 cm.
 
 */


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    
    float largestC;
    float smallestC;
    
    int stepDegree;
    
    cout << "Enter the smallest number of centimeters: ";
    
    cin >> smallestC;
    
    cout << "Enter the largest number of centimeters: ";
    
    cin >> largestC;
    
    cout << "enter the step degree: ";
    
    cin >> stepDegree;
    
    int x = 0;
    
    for(x = smallestC;
        x <= largestC;
        x += stepDegree)
        
    {
        cout << setw(5) << x << setw(10) << x * (0.393701) << "\n";
    }
    
    
    
    /*
     
     Form: for (initialization expression;
     loop repetition condition;
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

