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
 
 Page 432 Programming Projects: Q1 -
 
 1. An integer n is divisible by 9 if the sum of its digits is divisible by 9.
 Develop a program to determine whether or not the following numbers are divisible by 9:
 
 n = 154368
 n = 621594
 n = 123456
 
 */


#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int one = 154368;
    int number;
    
    int sum = 0;
    int digit;
    int i = 0;
    
    number =one;
    
    while ( i < 6)
    {
        digit = one%10;
        
        one = one/10;
        
        sum += digit;
        
        i++;
    }

    if (sum % 9 == 0)
    {
        cout << number << " is divisisible by 9";
    }
    else
        cout << one << " is not divisible";
    
    return 0;
}