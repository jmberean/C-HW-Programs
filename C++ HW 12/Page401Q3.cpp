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
 
 Page 401 7.3 Programming 3 -
 
 3. Write a C++ function called getDigitValue that reads data characters until it reads a digit character.
    Your function should return the numeric value of the first digit character read.
    Your function should use functions isdigit and digitToNumber (from Listing 7.2).
 
 */

#include <iostream>
#include <cctype>


using namespace std;

bool isdigit(char);

int digitToNumber(char);

int getDigitValue(char);


int main()
{
    char a;
    
    cout << "Enter data charecter: ";
    
    cin >> a;
    
    isdigit(a);
    
    cout << "result = " << getDigitValue(a);
    
    system ("pause");
    return 0;
}

int getDigitValue(char a)
{
    isdigit(a);
    digitToNumber(a);
    
    return a;
}


bool isdigit(char a)
{
    return true;
}


// Returns the number corresponding to its argument
// if its argument is a digit character; otherwise
// returns -1.

int digitToNumber(char ch)
{
    if (isdigit(ch))
        return (int(ch) - int('0'));
    else
        return -1;
}