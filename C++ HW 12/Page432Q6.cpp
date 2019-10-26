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
 
 Page 432 Programming Projects: Q6 -
 
 6. The interest paid on a savings account is compounded daily.
 This means that if you start with startbal dollars in the bank,
 
 at the end of the first day you’ll have a balance of
 startbal * (1 + rate/365) dollars,
 where rate is the annual interest rate (0.10 if the annual rate is 10 percent).
 
 At the end of the second day, you’ll have
 startbal * (1 + rate/365) * (1 + rate/365) dollars,
 
 and at the end of n days you’ll have
 startbal * (1 + rate/365)n dollars.
 
 Write a program that processes a set of data records,
 each of which contains values for rate, startbal, and n and computes the final account balance.
 
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float rate;
    float startBal;
    int nDays;
    
    float balance1;
    float balance2;
    float balance3;
    
    cout << "Enter rate: ";
    cin >> rate;
    
    cout << "\n";
    
    cout << "Enter starting balance: ";
    cin >> startBal;
    
    cout << "\n";
    
    cout << "Enter number of days: ";
    cin >> nDays;
    
    cout << "\n";
    // startbal * (1 + rate/365) * (1 + rate/365) dollars,
    
    balance1 = (1 + rate/365.0);
    
    balance2 = pow(balance1, nDays);
    
    balance3 = startBal * balance2;
    
    cout << "Starting balance: " << startBal << "\n\n";
    
    cout << "Final balance after " << nDays << " amount of days: " << balance3;
    
    //system ("pause");
    return 0;
    
}







    
    
    
    
    
    
    
    
    
    
    
    
    
    



