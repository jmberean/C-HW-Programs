/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/17/2015
 
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 7
 
 Section 4.7 Page 238 Programming Q4,Q6
 Section 4.8 Page 244 Programming Q1, Q2, Q3,Q4
 Page 253 Q12, Q16
 
 2. Write a nested if statement equivalent to the switch statement described in Programming Exercise 1.
 
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
    
    // an operator symbol (+, -, *, /, %),
    
    if ((nextCH == '+')||(nextCH == '-')||(nextCH == '/')||(nextCH == '*')||(nextCH == '%'))
    {
        cout << "Your charecter is an operator symbol (+, -, *, /, %)";
    }
    
    //  a punctuation symbol (comma, semicolon, parenthesis, brace, bracket)
    
    else if ((nextCH == ',')||(nextCH == ';')||(nextCH == '(')||(nextCH == ')')||(nextCH == '{')||(nextCH == '}')||(nextCH == '[')||(nextCH == ']'))
    {
        cout << "Your charecter is  a punctuation symbol (comma, semicolon, parenthesis, brace, bracket)";
    }
    
    // digit
    
    else if ((nextCH == '0')||(nextCH == '1')||(nextCH == '2')||(nextCH == '3')||(nextCH == '4')||(nextCH == '5')||(nextCH == '6')||(nextCH == '7')||(nextCH == '8')||(nextCH == '9'))
    {
        cout << "digit";
    }
    
    return 0;
}