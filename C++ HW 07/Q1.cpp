/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/17/2015
 
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 7
 
 Section 4.7 Page 238 Programming Q4,Q6
 Section 4.8 Page 244 Programming Q1, Q2, Q3,Q4
 Page 253 Q12, Q16
 
 1. Write a switch statement that prints a message indicating whether
 
 nextCh (type char) is an operator symbol (+, -, *, /, %),
 a punctuation symbol (comma, semicolon, parenthesis, brace, bracket),
 or a digit.
 
 Your statement should print the category selected. Include a default label.
 
 */

#include <iostream>

using namespace std;

int main()
{
    char nextCH;
    
    cout << "Please enter nextCH: ";
    
    cin >> nextCH;
    
    switch (nextCH) {
            
        case '+':
        case '-':
        case '/':
        case '*':
        case '%':
            
            cout << "Your charecter is an operator symbol (+, -, *, /, %)";
            break;
            
        case ',':
        case ';':
        case '(':
        case ')':
        case ']':
        case '}':
            cout << "Your charecter is a punctuation symbol (comma, semicolon, parenthesis, brace, bracket)";
            break;
            
            
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            
            cout << "Digit";
            break;
            
            
        default:
            ;
            
            
    }
    
    return 0;
}







































































































