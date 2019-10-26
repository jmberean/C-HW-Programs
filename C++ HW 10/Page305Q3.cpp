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
 
 Page 305 Programming Q3 -
 
 3. Write a program that displays the pattern below.         //  nested loops  ??
 
 *
 
 ***
 
 *****
 
 *******
 
 *********
 
 *******
 
 *****
 
 ***
 
 *
 
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
string funct(int);

int main ()
{
    int i = 1;
    
    for(int numAsterisks = 9; i <= numAsterisks; i += 2)
    {
        cout << funct(i) << endl;
    }
    
    for(int j = i - 4; j > 0; j -= 2)
    {
        cout << funct(j) << endl;
    }
    
    return 0;
}


string funct(int asterisks)
{
    string tempString;
    int spaces = (9 - asterisks)/2;
    
    for (int i = 0; i < spaces; i++)
        tempString += " ";
    
    for (int i = 0; i < asterisks; i++)
        tempString += "*";
    
    return tempString;
}
