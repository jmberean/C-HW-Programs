/*
John m Berean 
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++
HW 02 Page 63 Question 1,2 - 09/17/15
*/

    /*  1.Write a multiline comment with your name, your instructors name, and
    the course name. Use both methods for multiline comments. */

    /* John Michael Berean
    Professor Ye
    CSP*141*001 (9165) Intro to Programming in C++
    */
    
    // John Michael Berean
    // Professor Ye
    // CSP*141*001 (9165) Intro to Programming in C++
    
/*  2.(Continuation of programming Exercises 1 and 2 from Section 2.1) Write
    the C++ statement to multiply the weight in pounds by the conversion
    constant and store the resulting weight in kilograms. 
    Write the C++ statement(s) to display the weight in kilograms. */
    
    

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std;
                                // as defined by C++ standard library.

int main()                      /*  Exactly one main function per program.
                                    A function is a collection of related statements that perform a specific operation.
                                    int indicates the return/data type of the function.
                                    (  ) indicates no special information passed to the function by the operating system.
                                    program starts at main function. */
                                
{                               // { opens the main function.

    float lb, kg;               /*  declaration statement describes the data the function needs:
                                    float return/data type is a real number.
                                    for the variables lb and kg.*/
    
                                                                                /*  Executable statements - allows the compiler to specify 
                                                                                the actions the program will take. cout << */
      
    cout << "This program is designed to convert Pounds (lb) to Kg. \n\n";      // we inform the user this program is designed convert Pounds (lb) to Kg.    
                
    cout << "Please enter the weight in pounds: ";                              // we request the user to enter the weight in pounds (lb).
    
        cin >> lb;          // user enters the weight in pounds (lb).
        
        cout << "\n\n";     // (\n) skips lines, making it easier for the user to read the program.
        
    kg=0.45*lb;      // the formula neccesary for the program to calculate the conversion of pounds (lb) to Kilogram (Kg).
    
    cout << "The weight in kilograms is: ";         // we now read out to the user their converted weight.
    cout << kg;


return 0;   // closes program, informs program ran without errors.
}           // closes the main function.