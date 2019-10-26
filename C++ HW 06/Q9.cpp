/*
 
 Programmer: John m Berean                                                               Date: 10/17/2015
 
 Instructer: Professor Ye                           Class: CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 06
 
 Section 4.4 Page 219 Programming Q2
 Section 4.5 Page 229 Programming Q4
 Page 251 Q1 , Q5 Q8, Q9
 
 9.
 
 Write a program that will calculate and print out bills for the city water company.
 
 The water rates vary, depending on whether the bill is for home use, commercial use, or industrial use.
 A code of h means home
 ￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼use, a code of c means commercial use,
 and a code of i means industrial use.
 
 Any other code should be treated as an error. The water rates are computed as follows:
 
 ■ Code h: $5.00 plus $0.0005 per gallon used
 ■ Code c: $1000.00 for the first 4 million gallons used and $0.00025 for
 each additional gallon
 ■ Code i: $1000.00 if usage does not exceed 4 million gallons;
 $2000.00 if usage is more than 4 million gallons but does not exceed 10 million gallons; and $3000.00 if usage exceeds 10 million gallons
 
 Your program should prompt the user to enter an account number (type int),
 the code (type char),
 and the gallons of water used (type float).
 
 Your program should echo the input data and print the amount due from the user.
 
 */

#include <iostream>

using namespace std;

int main ()
{
    int accountN;
    char code;
    float gallons;
    float bill;
    
    cout << "Hello! This program will calculate and print out bills for the city water company.";
    
    cout << "\n\n" << "Please enter the account number: ";
    
    cin >> accountN;
    
    cout << "\n\n" << "Please enter the code: ";
    
    cin >> code;
    
    cout << "\n\n" << "Please enter the gallons of water used: ";
    
    cin >> gallons;
    
    if (code == 'h')
    {
        bill = 5 + (gallons * 0.0005);
    }
    if ((code == 'c') && (gallons > 4000000))
    {
        bill = 1000 + ((gallons-4000000) * 0.00025);
    }
    else if ((code = 'c')&&(gallons <= 4000000))
    {
        bill = 1000;
    }
    
    // ■ Code i: $1000.00 if usage does not exceed 4 million gallons;
    // $2000.00 if usage is more than 4 million gallons but does not exceed 10 million gallons; and $3000.00 if usage exceeds 10 million gallons
    
    if ((code = 'i')&&(gallons<=4000000))
    {
        bill = 1000;
    }
    else if ((code == 'i')&&(gallons>4000000)&&(gallons<=10000000))
    {
        bill = 2000;
    }
    else if ((code == 'i')&&(gallons>10000000))
    {
        bill = 3000;
    }
    
    cout << "\n\n" << "The bill for account number: " << accountN << " will be $" << bill << "\n";
    
    return 0;
}
