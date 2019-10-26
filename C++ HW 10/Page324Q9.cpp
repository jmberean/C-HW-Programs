/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         10/31/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 10
 
 Section 5.6 Page 298 Programming Q3
 Section 5.7 Page 301 Programming Q3
 Section 5.8 Page 305 Programming Q3
 Page 324  Q5 Q7, Q8, Q9, Q12
 
 9. Write a simple arithmetic expression translator that reads in expressions such as 25.5 + 34.2 and displays their value. Each expression has two numbers separated by an arithmetic operator.
 (Hint: Use a switch statement with the operator symbol (type char) as a selector to determine which arithmetic operation to perform on the two numbers. For a sentinel, enter an expression with zero for both operands.)
 
 */


#include <iostream>
#include <cmath>

using namespace std;

void whileProg(int,char,int);

int const SENTINEL = 0;

int main()
{
    int data1;
    char data2;
    int data3;
    
    cout << "Enter number 1: ";
    cin >> data1;
    cout << "Enter operation symbol: ";
    cin >> data2;
    cout << "Enter number two: ";
    cin >> data3;
    
    whileProg(data1,data2,data3);
    
    system ("pause");
    return 0;
}
void whileProg(int x, char y, int z)
{
    float result;
    
    while ((x!= SENTINEL)&&(z != SENTINEL))
    {
        switch (y)
        {
            case '+':
                result = x + z;
                break;
            case '-':
                result = x - z;
                break;
            case '*':
                result = x * z;
                break;
            case '/':
                result = x / z;
                break;
        }
        
        cout << "Result = " << result << "\n";
        
        cout << "Enter number one: ";
        cin >> x;
        cout << "Enter operation symbol: ";
        cin >> y;
        cout << "Enter number two: ";
        cin >> z;
    }
    
}
