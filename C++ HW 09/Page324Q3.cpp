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
 
 Page 324 Q3.)
 
 3. Write a program to find the largest, smallest and average values
 in a collection of n numbers where the value of n will be the first data item read.
 
 */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    
    int n;
    int largest ;
    int smallest ;
    float total = 0.0;
    float average;
    
    cout << "Enter N: ";
    
    cin >> n;
   
    int num1;
        
        cout << "Enter number: ";
        
        cin >> num1;
    
    smallest = num1;

    largest = num1;
    
    for (int control = 0;
         control < n;
         control ++)
        
    {
                
        if (num1 < smallest)
        {
            smallest = num1;
        }
        else if (num1 > largest)
        {
            largest = num1;
        }
        
        if (control == 0)
        {
            smallest = num1;
            largest = num1;
        }
        
        total += num1;
        
        cout << "Enter number: ";
        
        cin >> num1;
        
    }
    
    average = total/ n;
    
    cout << "The smaleest number is: " << smallest;
    
    cout << "The largest number is: " << largest;
    
    cout << "The average is: " << average;
    
    return 0;
}