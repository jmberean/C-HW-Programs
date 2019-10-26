/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         11/10/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 10
 
 Section 5.6 Page 298 Programming Q3
 Section 5.7 Page 301 Programming Q3
 Section 5.8 Page 305 Programming Q3
 Page 324 Q5 Q7, Q8, Q9, Q12
 
 Page 301 Programming Q3 -
 
 Write a program that displays the value of each triplet of items entered as data;
 
 for example, for the data + 5 3.5, it should display the line: 5 + 3.5 = 8.5.
 
 The program should terminate when q or Q is the first item of a triplet.
 
 */

#include <iostream>
#include <cmath>

using namespace std;

void instruct();
void whileProg(char);

int main()
{
    char data1;
    
    instruct();
    
    cin >> data1;
    
    whileProg(data1);
    
    return 0;
}
void instruct()
{
    cout << " This program displays the value of each triplet of items entered as data, \n"
    "for example, for the data + 5 3.5, it should display the line: 5 + 3.5 = 8.5 \n"
    "The program will terminate when q or Q is the first item of a triplet. \n"
    "Enter operation symbol: ";
}

void whileProg(char a)
{
    float data2;
    float data3;
    float result;
    
    while ((a != 'q')&&(a != 'Q'))
    {
        cout << "Enter data item one: ";
        cin >> data2;
        cout << "Enter data item two: ";
        cin >> data3;
        
        switch (a)
        {
            case '+':
                result = data2 + data3;
                break;
            case '-':
                result = data2 - data3;
                break;
            case '*':
                result = data2 * data3;
                break;
            case '/':
                result = data2 / data3;
                break;
                cout << "\n";
        }
        
        cout << data2 << " " << data3 << " = " << result;
        
        cout << "\nEnter data item 1: ";
        
        cin >> a;
    }
    
}