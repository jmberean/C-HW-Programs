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
 
 Section 5.4 Page 285 Programming Q1.)
 
 1. There are 900 people in a town whose population increases by 10 percent (a data item) each year.
 
 Write a loop that displays the annual population and determines how many years (countYears)
 it will take for the population to pass 20,000.
 Verify that your program works if the population doubles each year (an increase of 100%).
 
 */ 

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float increase=(1.0);
    int pop = 900;
    
    int countYears;
    
    for (countYears = 0;
         pop < 20000;
         countYears ++)
    {
        
        
        
        cout << "Population count: " << setw(5) << pop << " After " << setw(15) << countYears << " years. \n";
        pop *= (1 + increase);
        ;
    }
    
    cout << "\n\n" << "It will take: " << countYears << " years for the population to surpass 20,000" ;
    
    
    
    return 0;
}