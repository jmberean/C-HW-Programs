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
 
 
 Page 432 Programming Projects: Q2 -
 
 2. Redo the previous programming project by reading each digit of the number to be tested into the type char variable digit. Form the sum of the numeric values of the digits. (Hint: The numeric value of digit is int (digit) - int ('0').)
 */


#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int i = 0;
    char digit;
    
    while ( i < 6)
    {
        
        cout << "type charecter digit: ";
        cin >> digit;
        
        sum += (int(digit) - int('0'));
        
        i++;
    }
    
    if (sum % 9 == 0)
    {
        cout << sum << " is divisisible by 9";
    }
    else
        cout << sum << " is not divisible";
    
    return 0;
}