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
 
 5. Write a program to process weekly employee time cards for all employees of an organization.
 
 Each employee will have three data items: the employee’s name, the hourly wage rate, and the number of hours worked during a given week.
 Employees are to be paid time-and-a-half for all hours worked over 40.
 A tax amount of 3.625 percent of gross salary will be deducted.
 The program output should show each employee’s name, gross pay, and net pay, and should also display the total net and gross amounts and their averages.
 Use ZZZZZZ as a sentinel value for name.
 
 */

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

void instruct(string&);

int main ()
{
    const string SENTINEL = "ZZZ";
    
    float hourlyRate;
    float hours;
    float pay = 0;
    float netPay;
    
    float totalGross = 0;
    float totalNet = 0;
    
    string name;
    cout << setprecision(2) << fixed;
    instruct(name);
    
    while (name != SENTINEL)
    {
        
        cout << "\nEnter hourly wage rate: ";
        
        cin >> hourlyRate;
        
        cout << "\nEnter hours worked: ";
        
        cin >> hours;
        
        if (hours <= 40)
        {
            pay = hourlyRate * hours;
        }
        else if (hours > 40)
        {
            float overTime = hours - 40;
            
            float pay2 = overTime * hourlyRate * 1.5;
            pay = hourlyRate * 40;
            pay = pay2 + pay;
        }
        
        netPay = pay - (pay * 0.03625);
        
        totalNet += netPay;
        totalGross += pay;
        
        cout << "\nName: " << name;
        
        cout << "\nGross pay: $" << pay;
        
        cout << "\nNetpay : $" << netPay;
        
        cout << "\n\n";
        
        cout << "Enter name: ";
        
        
        cin >> name;
    }
    
    cout << "Total Net: " << totalNet << endl;
    cout << "Total Gross: " << totalGross << endl;
    
    float average = totalNet + totalGross / 2;
    
    cout << "Average: " << average;
    
    system ("pause");
    return 0;
}
void instruct(string& name)
{
    cout <<
    
    "This program processes weekly employee time cards for all employees of an organization.\n"
    "Each employee will have three input items:\n"
    "the employee’s name,\n"
    "the hourly wage rate,\n"
    "and the number of hours worked during a given week.\n"
    "Employees are to be paid time-and-a-half for all hours worked over 40\n"
    "A tax amount of 3.625 percent of gross salary will be deducted.\n"
    "The program output will show each employee’s name, gross pay, and net pay,\n"
    "and also display the total net and gross amounts and their averages.\n"
    "ZZZZZZ is a sentinel value for name.";
    
    cin >> name;
}