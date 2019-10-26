/*
John m Berean 
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++ */

/* HW 02 Page 110 Q 2 - 09/17/15
    
    2.  Write a program to read two data items and print their sum, difference, product, and quotient.

DATA REQUIREMENTS

Problem Input
int x, y // two items

Problem Output
int sum // sum of x and y
int difference // difference of x and y
int product // product of x and y
float quotient // quotient of x divided by y */

// This program will read two data items and print their sum, difference, product, and quotient.

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std;
                                // as defined by C++ standard library.

int main()                      /*  Exactly one main function per program.
                                    A function is a collection of related statements that perform a specific operation.
                                    int indicates the return/data type of the function.
                                    (  ) indicates no special information passed to the function by the operating system.
                                    program starts at main function. */
                                
{                               // { opens the main function.
    
    //  declaration statement - declaring the data the function needs.
    
    int x, y, sum, difference, product;         // declaring the variables x, y, sum, difference, product as the integer data reurn type.
    float quotient;                             // declaring the variable quotient as the float data reurn type.
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    cout << "Hello! This program computes the sum, difference, product and quotient of two numbers. \n";        // informs the user what this program is designed to do.
    cout << "Please enter your first number: ";     // we request the user to enter their first number.
        
        /*  Input statements obtain data for program to use 
            cin - name of stream associated with standard input device (keyboard by default)
            Extraction operator (>>) */
        
        cin >> x;   // user enters their first number.
    
    cout << "Please enter your second number";      // we request the user enter their second number.
        cin >> y;                                   // user enters their second number.
        
    sum=x+y;        // formula the program will use to calculate the sum of the two numbers.
    
    cout << "Sum = " << sum << "\n";    // we read out the sum to the user.
    
    difference=x-y;                     // formula the program will use to calculate the difference of the two numbers.
    
    cout << "Difference = " << difference << "\n";  // we read out the difference to the user.
    
    product=x*y;                                    // formula the program will use to calculate the product of the two numbers.
    
    cout << "Product = " << product << "\n";    // we read out the product of the two numbers to the user.
    
    quotient=x/y;                               // formula the program will use to calculate the quotient.
    
    cout << "Quotient = " << quotient << "\n";      // we read out the quotient of the two numbers to the user.
    
   return 0;   // closes program, informs program ran without errors.
}               // closes the main function.


