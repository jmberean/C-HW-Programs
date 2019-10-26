/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         10/31/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 10
 
 Section 5.6 Page 298 Programming Q3
 Section 5.7 Page 301 Programming Q3
 Section 5.8 Page 305 Programming Q3
 Page 324  Q5 Q7, Q8, Q9, Q12
 
 
 Page 298 Programming Q3 -
 
 a. Write a while loop that prompts a user for a score between 0 and 100 inclusive and continues to repeat the prompt until a valid entry is provided.
 
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int const SENTINEL = -1;
    
    int score;
    
    cout << "This program allows the user to imput a score between 0 and 100, and stops when the user enters " << SENTINEL << ".";
    
    cout << "\nEnter score: ";
    
    cin >> score;
    
    while (score != SENTINEL)
    {
        cout << "\n" << "Enter score: ";
        
        cin >> score;
    }
    return 0;
}
