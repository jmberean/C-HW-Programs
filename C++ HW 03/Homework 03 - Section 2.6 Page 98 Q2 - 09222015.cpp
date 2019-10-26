/*
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/22/2015
 
 Homework 03 - Section 2.6 Page 98 Q2
 
 
 2.  Write a program that reads two int values into m, n and displays their
 sum, their differences (m – n and n – m), their product, their quotients
 (m / n and n / m) and both m % n and n % m.
 
 If the numbers are 4 and 5, the line that shows
 their sum should be displayed as: 5 + 4 = 9
 
 Use this format for each output line
 
 // file: Homework 03 - Section 2.6 Page 98 Q2 - 09/22/2015.cpp
 
 //  This program will read two int values into m, n and displays their sum, their differences (m – n and n – m),
 their product, their quotients (m / n and n / m) and both m % n and n % m, their remainders. */

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std; as defined by C++ standard library.

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    //  declaration statements - declaring the data the function needs.
    
    int m;              // first number
    int n;              // second number
    int sum;            // sum of the two values
    int difference;     // subtracting the two values
    int product;        // the multiplication of the two values
    int quotient;       // the division of the two values
    int remainderA;     // the remainder of the division of the two values
    
    
    
    cout << "Hello! This program is designed to calculate the "
    "sum, difference, product, quotient and remainder"
    " of two integers of your choice!" << "\n\n";   // informs the user what this program is designed to do.
    
    cout << "Please enter your first number: ";           // we request the user to enter their first number.
    
    cin >> m;            // user enters their first number.  // Input statements obtain data for program to use
    
    cout << "\n\n";
    
    // cin - name of stream associated with standard input device (keyboard by default)
    
    cout << "Please enter your second number: ";          // we request the user enter their second number.               // Extraction operator (>>)
    
    cin >> n;                                                   // user enters their second number.
    
    cout << "\n\n";
    
    sum = m + n;                                            // formula the program will use to calculate the sum of the two numbers.
    
    cout << m << "+" << n << "=" << sum << "\n\n";              // we read out the numbers and there sum to the user.
    
    difference = m - n;                                     // formula the program will use to calculate the difference of the two numbers.
    
    cout << m << "-" << n << "=" << difference << "\n\n";       // we read out the numbers and there difference to the user.
    
    product=m*n;                                        // formula the program will use to calculate the product of the two numbers.
    
    cout << m << "*" << n << "=" << product << "\n\n";          // we read out the numbers and there product to the user.
    
    quotient = m / n;                                       // formula the program will use to calculate the quotient.
    
    cout << m << "/" << n << "=" << quotient << "\n\n";         // we read out the numbers and the quotient to the user.
    
    remainderA = m % n;                                     // formula the program will use to calculate the remainder of m/n
    
    cout << m << "%" << n << "=" << remainderA << "\n\n" << "Thank you! and have a nice day!";
    
    return 0;   // closes program, informs program ran without errors.
}               // closes the function.