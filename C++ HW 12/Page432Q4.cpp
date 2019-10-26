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
 
 Page 432 Programming Projects: Q4 -
 
 4. A number is said to be perfect if the sum of its divisors (except for itself) is equal to itself.
 For example, 6 is a perfect number because the sum of its divisors (1 + 2 + 3) is 6.
 The number 8 is said to be deficient because the sum of its divisors (1 + 2 + 4) is only 7.
 The number 12 is said to be abundant because the sum of its divisors (1 + 2 + 3 + 4 + 6) is 16.
 Write a program that lists the factors of the numbers between 1 and 100 and classifies each number as perfect, deficient, or abundant.
 
 */

#include <cmath>

#include <iostream>

using namespace std;

int main()

{
    int num, countB;
    
    cout << "Please enter a positive maxiumum integer value you wish to find divisors: \n";
    cin >> num;
    
    cout << "Divisors of " << num << ": ";
    
    for(countB = 1; countB<= num; countB++)
    {
        if(num % countB == 0)
        {
            cout << countB << " " ;
        }
    }
    cout << endl;
    
    
    return 0;
}