/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         10/31/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 9
 
 Section 5.2 Page 270 Q1
 Section 5.3 Page 278 Programming Q1, Q2, Q3
 Section 5.4 Page 285 Programming Q1, Q2
 
 Page 324 Q3, Q4
 
 Section 5.4 Page 285 Programming Q2.)
 
 2. Rewrite the payroll program (Listing 5.2), moving the loop processing into a function subprogram. Return the total payroll amount as the function result.
 
 // File: computePay.cpp
 // Computes the payroll for a company
 
 ￼#include <iostream>
 
 using namespace std;
 
 int main()
 {
 
 int numberEmp;// input - number of employees
 int countEmp;// counter - current employee number
 float hours;// input - hours worked
 float rate;// input - hourly rate
 float pay;// output - weekly pay
 float totalPay;// output - company payroll
 
 // Get number of employees from user.
 
 cout << "Enter number of employees: "; cin >> numberEmp;
 
 // Process payroll for all employees.
 
 totalPay = 0.0;
 countEmp = 0;
 
 while (countEmp < numberEmp)
 {
 cout << "Hours: ";
 cin >> hours;
 
 cout << "Rate : $";
 cin >> rate;
 
 pay = hours * rate;
 
 cout << "Pay is $" << pay << endl << endl;
 
 totalPay = totalPay + pay;
 
 // add next pay
 
 countEmp = countEmp + 1;
 }
 
 cout << "Total payroll is $" << totalPay << endl;
 
 cout << "All employees processed." << endl;
 
 return 0;
 }
 
 */

// File: computePay.cpp
// Computes the payroll for a company

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

float calculator (int);

int main()
{
    
    int numberEmp;  // input - number of employees
    
    // Get number of employees from user.
    
    cout << "Enter number of employees: ";
    
    cin >> numberEmp;
    
    // Process payroll for all employees.
    
    cout << "Total payroll is $" << calculator(numberEmp) << endl;
    
    cout << "All employees processed." << endl;
    
    return 0;
}

float calculator (int a)
{
    
    int countEmp;// counter - current employee number
    float hours;// input - hours worked
    float rate;// input - hourly rate
    float pay;// output - weekly pay
    float totalPay;// output - company payroll
    
    totalPay = 0.0;
    countEmp = 0;
    
    while (countEmp < a)
    {
        cout << "Hours: ";
        cin >> hours;
        
        cout << "Rate : $";
        cin >> rate;
        
        pay = hours * rate;
        
        cout << "Pay is $" << pay << endl << endl;
        
        totalPay = totalPay + pay;
        
        // add next pay
        
        countEmp = countEmp + 1;
    }
    
    return totalPay;
}