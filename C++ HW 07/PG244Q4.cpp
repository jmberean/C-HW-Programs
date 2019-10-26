/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/17/2015
 
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 7
 
 Section 4.7 Page 238 Programming Q4,Q6
 Section 4.8 Page 244 Programming Q1, Q2, Q3,Q4
 Page 253 Q12, Q16
 
 4. Use a switch statement in a function that returns the value of
 
 (a + b) if 'op' is +
 
 (a - b) if 'op' is -
 
 (a * b) if 'op' is *
 
 (a / b) if 'op' is /
 
 (a % b) if 'op' is %
 
 Parameters a and b are type int and op is type char.
 
 */

#include <iostream>

using namespace std;

int ifFunction(char,int,int);

int main()
{
    int a;
    int b;
    
    char op;
    
    float results;
    
    cout << "Hello ";
    
    cout << "Please enter op: ";
    
    cin >> op;
    
    cout << "Please enter a: ";
    
    cin >> a;
    
    cout << "Please enter b: ";
    
    cin >> b;
    
    results = ifFunction(op,a,b);
    
    cout << results;
    
    return 0;
}

int ifFunction (char op, int a, int b)
{
    switch (op)
    {
        case '+':
            
            return (a+b);
            
            break;
            
        case '-':
            
            return (a-b);
            
            break;
            
        case '*':
            
            return (a*b);
            
            break;
            
        case '/':
            
            return (a/b);
            
            
        case '%':
            
            return (a%b);
    }
}