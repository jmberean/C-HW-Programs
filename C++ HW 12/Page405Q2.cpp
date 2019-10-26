/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         11/14/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 12
 
 Page 382 Q9, Q10
 Page 401 7.3 Programming 3
 Page 405 7.4 Programming 2
 Page 432 Programming Projects: Q1, Q2, Q4, Q6
 
 Page 405 7.4 Programming 2 -
 
 2. Write a loop that continues prompting and reading exam scores until the user enters a score that is in range (0 through 100). Use function inRange from Self-Check Exercise 2.
 
 
 2. What does the following function do:
 
 bool inRange(int item, int min, int max)
 {
 return (item >= min && item <= max)
 }
 
 What values can the function return?
 */

#include <iostream>

using namespace std;

bool inRange(int,int,int);

int main()
{
    
    int item;
    int max = 100;
    int min = 0;
    
    cout << "Enter number: ";
    cin >> item;
    
    while (inRange(item, min, max))
    {
        cout << "Number = " << item;
        
        cout << "Enter number: ";
        cin >> item;
        
        inRange(item, min, max);
    }
    
    system ("pause");
    return 0;
}

bool inRange(int item, int min, int max)
{
    return (item >= min && item <= max);
}