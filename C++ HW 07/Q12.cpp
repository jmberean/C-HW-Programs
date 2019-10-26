/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/17/2015
 
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 7
 
 Section 4.7 Page 238 Programming Q4,Q6
 Section 4.8 Page 244 Programming Q1, Q2, Q3,Q4
 Page 253 Q12, Q16
 
 12.
 
 Write a function dayNumber that returns the day number (1 to 366) in a year for a date that is provided as input data.
 
 Your function should accept the month (1 through 12), day, and year as integers.
 
 As an example, January 1, 1994 is day 1. December 31, 1993 is day 365.
 
 December 31, 1996 is day 366 since 1996 is a leap year.
 
 A year is a leap year if it’s divisible by four,
 except that any year divisible by 100 is a leap year only if it’s also divisible by 400.
 
 Write and use a second function that returns true if its argument, a year, is a leap year.
 */


#include <iostream>

using namespace std;

int dayNumber(int, int, int);

int main()
{
    int dN;
    
    int m;
    int d;
    int y;
    
    
    cout << "Please enter the month: ";
    
    cin >> m;
    
    cout << "Please enter the day: ";
    
    cin >> d;
    
    cout << "Please enter the year: ";
    
    cin >> y;
    
    dN = dayNumber(m,d,y);
    
    cout << "The day number is: " << dN << " In the year " << y;
    
    return 0;
}

bool weatherLeep (int year)
{
    return ((year%4 == 0)||((year/100)&&(year%400)));
}

int dayNumber(int m,int d, int y)
{
    int numberOfDays;
    
    if ((m == 1)&&(!weatherLeep(y)))
    {
        numberOfDays = d;
    }
    else if ((m == 2)&&(!weatherLeep(y)))
    {
        numberOfDays = 31 + d;
    }
    else if ((m == 3)&&(!weatherLeep(y)))
    {
        // 31 + 28 = 59
        
        numberOfDays = 59 + d;
    }
    else if ((m == 3)&&(weatherLeep(y)))
    {
        // 31 + 29 = 60
        
        numberOfDays = 60 + d;
    }
    else if ((m == 4)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 = 90
        
        numberOfDays = 90 + d;
    }
    else if ((m == 4)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 = 91
        
        numberOfDays = 91 + d;
    }
    else if ((m == 5)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 + 30 = 120
        
        numberOfDays = 120 + d;
    }
    else if ((m == 5)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 + 30 = 121
        
        numberOfDays = 121 + d;
    }
    else if ((m == 6)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 + 30 + 31 = 151
        
        numberOfDays = 151 + d;
    }
    else if ((m == 6)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 + 30 + 31 = 152
        
        numberOfDays = 152 + d;
    }
    else if ((m == 7)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 + 30 + 31 + 30 = 181
        
        numberOfDays = 181 + d;
    }
    else if ((m == 7)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 + 30 + 31 + 30 = 182
        
        numberOfDays = 182 + d;
    }
    else if ((m == 8)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 + 30 + 31 + 30 + 31 = 212
        
        numberOfDays = 212 + d;
    }
    else if ((m == 8)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 + 30 + 31 + 30 + 31 = 213
        
        numberOfDays = 213 + d;
    }
    else if ((m == 9)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 = 243
        
        numberOfDays = 243 + d;
    }
    else if ((m == 9)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 = 244
        
        numberOfDays = 244 + d;
    }
    else if ((m == 10)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 = 273
        
        numberOfDays = 273 + d;
    }
    else if ((m == 10)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 = 274
        
        numberOfDays = 274 + d;
    }
    else if ((m == 11)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 = 304
        
        numberOfDays = 304 + d;
    }
    else if ((m == 11)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 = 305
        
        numberOfDays = 305 + d;
    }
    else if ((m == 12)&&(!weatherLeep(y)))
    {
        // 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 = 334
        
        numberOfDays = 334 + d;
    }
    else if ((m == 12)&&(weatherLeep(y)))
    {
        // 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 = 335
        
        numberOfDays = 335 + d;
    }
    
    return (numberOfDays);
    
}