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
 
 Page 344 Q4 -
 
 4. Write a function
 that has two input parameters, x and y,
 and two output parameters, small and big.
 
 The function should return the smaller of its inputs through small and the larger through big.
 */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void function (float, float, float&, float&);

int main()
{
    float n1 = 0;
    float n2 = 0;
    float smaller;
    float larger;
    
    function(n1, n2, smaller, larger);
    
    cout << "\nsmaller = " << smaller << "\n";
    
    cout << "larger = " << larger;
    
    system ("pause");
    return 0;
}
void function(float n1, float n2, float& smaller, float& larger)
{
    
    cout << "Enter number one: ";
    
    cin >> n1;
    
    cout << "\nEnter number two: ";
    
    cin >> n2;
    
    if (n1 < n2)
    {
        smaller = n1;
        larger = n2;
    }
    else if (n1 > n2)
    {
        larger = n1;
        smaller = n2;
    }
    else if (n1 == n2)
    {
        smaller = n1;
        larger = n2;
    }
}




