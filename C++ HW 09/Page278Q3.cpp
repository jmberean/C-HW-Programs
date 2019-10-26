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
 
 Section 5.3 Page 278 Programming Q3.)
 
 3. Write a function that return xn where x is a type float parameter and n is a type int parameter.
 
 Use a loop.
 
 The function should work for negative values as well. (Hint: x-n = 1/xn).
 
 */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

float xnReturn (float, int);

int main()
{
    float x;
    int n;
    
    cout << "Enter the value for x: ";
    
    cin >> x;
    
    cout << "Enter the value for n: ";
    
    cin >> n;
    
    cout << xnReturn( x, n);
    
    return 0;
}

float xnReturn(float a, int b)
{
    float final = a;
    
    int i;
    
    if (b > 0)
    {
        
        for (i = 1;
             i < b;
             i ++)
        {
            final *= a;
        }
        
    }
    
    else if (b <= 0)
    {
        for (int i = 0;
             i >= b;
             i--)
            
        {
            final /= a;
        }
    }
    
    return final;
}













