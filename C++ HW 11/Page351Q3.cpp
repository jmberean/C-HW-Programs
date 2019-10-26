/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         11/14/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 11
 Programming Projects:
 Page 344 Q4
 Page 351 Q3
 Page 376 Q1, Q2, Q5, Q8
 
 Page 351 Q3 -
 
 3. Write and test a function multiplyFrac that has four inputs representing the numerator and denominator of two fractions. The function should return the numerator and denominator of their product fraction.
 */

#include <iostream>

using namespace std;

void multiplyFrac(float, float, float, float, float&, float&);

int main()
{
    float num1;
    float num2;
    float den1;
    float den2;
    float numResult;
    float denResult;
    
    multiplyFrac (num1, num2, den1, den2, numResult, denResult);
    
    cout << "\nAnswer = \n\n";
    
    cout << numResult << "/" << denResult;
    
    system ("pause");
    return 0;
}

void multiplyFrac(float num1, float num2, float den1, float den2, float& numResult, float& denResult)
{
    cout << "Enter numerator one: ";
    cin >> num1;
    cout << "\nEnter denominator one: ";
    cin >> den1;
    
    cout << "\nEnter numerator two: ";
    cin >> num2;
    cout << "\nEnter denominator two: ";
    cin >> den2;
    
    numResult = num1 * num2;
    
    denResult = den1 * den2;
}

