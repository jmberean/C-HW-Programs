/*
 
 Programmer: John m Berean                                                               Date: 10/17/2015
 
 Instructer: Professor Ye                           Class: CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 06
 
 Section 4.4 Page 219 Programming Q2
 Section 4.5 Page 229 Programming Q4
 Page 251 Q1 , Q5 Q8, Q9
 
 4. Modify the program in Listing 4.1 to use the functions in Programming Exercises 2 and 3.
 
 2. Write function readHours that reads in hours worked and returns
 the value entered and function readRate that reads in hourly pay rate and returns the value entered.
 
 3. Write function printResults that displays in a meaningful way the values of its two arguments
 that represent gross pay and net pay.
 
 
 */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;


float computeGross(float, float);
float computeNet(float);

void instructUser();

float readHours();
float readRate();

void printResults(float, float);

const float MAX_NO_DUES = 100.00;       // max earnings before dues (dollars)
const float dues = 15.00;               // dues amount (dollars)
const float MAX_NO_OVERTIME = 40.0;     // max hours before overtime
const float OVERTIME_RATE = 1.5;        // overtime rate

int main()
{
    float totalHours;
    float pay;
    
    float gross; // output: gross pay (dollars)
    float net; // output: net pay (dollars)
    
    instructUser();
    
    totalHours = readHours();
    
    pay = readRate ();
    
    gross = computeGross(totalHours, pay);  // Compute gross salary.
    
    net = computeNet(gross);				// Compute net salary.
    
    printResults(gross, net);
    
    system ("pause");
    
    return 0;
}

void instructUser()
{
    
    cout << "This program computes gross and net salary. \n";
    cout << "A dues amount of " << dues << " is deducted for\n";
    cout << "an employee who earns more than " << MAX_NO_DUES << "\n";
    
    cout << "Overtime is paid at the rate of " << OVERTIME_RATE <<"\n";
    cout << "times the regular rate for hours worked over " << MAX_NO_OVERTIME << "\n";
    cout << "Enter hours worked and hourly rate" << "\n";
    cout << "on separate lines after the prompts." << "\n";
    cout << "Press <return> after typing each number." << "\n";
    
} // end instructUser

// Find the gross pay

// IN: number of hours worked   // IN: hourly pay rate (dollars)
float computeGross (float hours, float rate)
{
    
    float gross;         // RESULT: gross pay (dollars)
    float regularPay;    // pay for first 40 hours
    float overtimePay;   // pay for hours in excess of 40
    
    if (hours > MAX_NO_OVERTIME)        // Compute gross pay.
    {
        regularPay = MAX_NO_OVERTIME * rate;
        
        overtimePay = (hours - MAX_NO_OVERTIME) * OVERTIME_RATE * rate;
        
        gross = regularPay + overtimePay;
    }
    
    else
        gross = hours * rate;
    
    return gross;
    
} // end computeGross

// Find the net pay
float computeNet(float gross)       // IN: gross salary (dollars)
{
    
    float net; // RESULT: net pay (dollars)
    
    if (gross > MAX_NO_DUES)        // Compute net pay.
        
        net = gross - dues; // deduct dues amount
    
    else
        
        net = gross; // no deductions
    
    return net; } // end computeNet

float readHours()
{
    float hours; // input: hours worked
    
    cout << "\n\n" << "Enter Hours worked: ";   // Enter hours and rate.
    
    cin >> hours;
    
    return hours; }

float readRate()
{
    float rate;
    
    cout << "\n\n" << "Enter hourly rate: $";
    
    cin >> rate;
    
    return rate; }

void printResults(float a, float b)
{
    cout << "Gross salary is $" << a << endl;
    
    cout << "Net salary is $" << b << endl;
}