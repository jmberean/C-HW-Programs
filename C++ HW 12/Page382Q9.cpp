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
 
 Page 382 Q9 -
 
 9. Write a program to model a simple calculator.
 
 Each data line should consist of the next operation to be performed from the list below and the right operand.
 Assume the left operand is the accumulator value (initial value of 0).
 
 You need a function scan_data with two output parameters that returns the operator and right operand scanned from a data line.
 You need a function do_next_op that performs the required operation.
 do_next_op has two input parameters (the operator and operand) and one input/output parameter (the accumulator).
 
 The valid operators are:
 
 + add
 
 - subtract
 
 * multiply
 
 / divide
 
 ^ power (raise left operand to power of right operand)
 
 q quit
 
 Your calculator should display the accumulator value after each operation. A sample run follows.
 
 + 5.0
 result so far is 5.0
 
 ^2
 result so far is 25.0
 
 / 2.0
 result so far is 12.5
 
 q0
 final result is 12.5
 
 */

#include <iostream>
#include <cmath>

void scan_data(char&, float&);

void do_next_op(char, float, float);

using namespace std;

int main()
{
    char symbol;
    float num;
    float accumulator = 0;
    
    do_next_op(symbol, num, accumulator);
    
    //system ("pause");
    return 0;
}
void scan_data(char& symbol, float& num)
{
    cout << "\n\nEnter the operation symbol: ";
    cin >> symbol;
    
    cout << "Enter number: ";
    cin >> num;
}
void do_next_op(char symbol, float num, float accumulator)
{
    scan_data(symbol, num);
    
    while (symbol != 'q')
    {
        
        if (symbol == '+')
        {
            accumulator += num;
        }
        else if (symbol == '-')
        {
            accumulator -= num;
        }
        else if (symbol == '*')
        {
            accumulator *= num;
        }
        else if (symbol == '/')
        {
            accumulator /= num;
        }
        else if(symbol == '^')
        {
            accumulator = pow(accumulator, num);
        }
        
        cout << "\n" << accumulator;
        
        scan_data(symbol,num);
        
    }
}




























































