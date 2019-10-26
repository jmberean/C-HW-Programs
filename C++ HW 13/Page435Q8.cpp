
/*
 
 
 
 8. Julian day numbers are used to provide a number for a day of the year so that calculations can be performed relatively easily to determine the difference between two dates.
 
 For example, if you wanted to determine the number of days between the day you were born and today, this would be a very tedious calculation. You would need to determine how many days followed the day you were born in that year, how many days were in each year between the year you were born and the current year, and how many days were in the current year up to today. This is complicated by the fact that leap years have 366 days (see Programming Project 11 in Chapter 6). The Julian day number for a day is the number of days that have elapsed between that day and a base date of January 1, 4713 B.C.E. Code the following algorithm for computing the Julian day number as a type long function where day is an integer from 1 to 31, month goes from 1 to 12, and year goes from - 4713 (4713 B.C.E.) to whatever.
 
 long julianDayNumber(int month, int day, int year)
 {
 
 jyear = year;
 jmonth = month;
 
 if (year < 0)
 increment jyear by 1;  // no year 0
 
 if (month > 2)
 increment jmonth by 1;
 
 
 else
 increment jmonth by 13 and decrement jyear by 1
 
 long julian = floor(362.25 * jyear) + floor(30.6001 * jmonth) + day + 1720995.0;
 
 if the argument date is not before October 15, 1582
 
 int jCorrection = 0.01 * jyear;
 julian = julian + 2 - jCorrection + 0.25 * jCorrection;
 
 return julian;
 }
 
 Write and test a function to calculate the Julian day number for a given day.
 (The date October, 1995 is Julian day 2,450,000;
 the date October 15, 1582 is Julian day number 2,299,161.)
 
 Use this function to determine how many days you’ve been alive.
 
 */


#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

long julianDayNumber(int, int, int);

int main()
{
    int day, month, year;
    
    cout << "Enter your birthday day: ";
    cin >> day;
    
    cout << "Enter birth month: ";
    cin >> month;
    
    cout << "Enter birth year: ";
    cin >> year;
    
    int answer1 = julianDayNumber(day, month,year);
    
    int day1, month1, year1;
    
    cout << "Enter todays day: ";
    cin >> day1;
    
    cout << "Enter current month: ";
    cin >> month1;
    
    cout << "Enter current year: ";
    cin >> year1;
    
    int answer2 = julianDayNumber(day1, month1, year1);
    
    int result = answer2 - answer1;
    
    cout << "You have been alive " << result << " days.";
    
    return 0;
}


long julianDayNumber(int day, int month, int year)
{
    
    float jyear = year;
    float jmonth = month;
    
    if (year < 0)
    {
        jyear ++;
    }
    //increment jyear by 1;  // no year 0
    
    if (month > 2)
    {
        jmonth ++;
    }
    
    // increment jmonth by 1;
    
    else
    {
        jmonth += 13;
        jyear --;
    }
    
    // increment jmonth by 13 and decrement jyear by 1
    
    long julian = floor(365.25 * jyear) + floor(30.6001 * jmonth) + day + 1720995.0;
    
    if (julian > 2299160.5)     // the argument date is not before October 15, 1582
    {
        int jCorrection = 0.01 * jyear;
        
        julian = julian + 2 - jCorrection + 0.25 * jCorrection;
    }
    
    return julian;
}





