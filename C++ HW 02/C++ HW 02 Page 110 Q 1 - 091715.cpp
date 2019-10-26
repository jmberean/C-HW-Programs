/*
John m Berean 
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++ */

/* HW 02 Page 110 Q 1 - 09/17/15

    1.  Write a program to convert a temperature in degrees Fahrenheit to degrees Celsius.

DATA REQUIREMENTS

Problem Input
int fahrenheit // temperature in degrees Fahrenheit

Problem Output
float celsius // temperature in degrees Celsius

Formula
celsius = (5/9) * (fahrenheit - 32) */

// This program is designed to compute degrees in fahrenheit into degrees celsius

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
    
    int fahrenheit;         // declaring the variable farhenheit as a integer data return type.
    float celsius;          // declaring the variable celsius as a float data return type.
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    cout << "Hello! This program is designed to convert degrees in fahrenheit into degrees celsius.";      // informs the user that this program is designed to compute the degrees in fahrenheit into degrees celsius.
    
    cout << "Please enter the degrees in fahrenheit: ";    // we request the user to enter their degrees in fahrenheit.
        
        /*  Input statements obtain data for program to use 
            cin - name of stream associated with standard input device (keyboard by default)
            Extraction operator (>>) */

        cin >> fahrenheit;              // user enters their degrees in fahrenheit.
        
    celsius = (5.0/9.0)*(fahrenheit - 32);  // nessesary formula to convert degrees in farhenheit to degrees celsius.
    
    cout << "The degrees in celsius is: " << celsius;       // outputs the degrees in celsius to user.
    
  return 0;   // closes program, informs program ran without errors.
}               // closes the main function.













































































