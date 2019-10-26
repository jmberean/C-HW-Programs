/*
John m Berean 
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++ */

/* HW 02 Page 81 Question 1 - 09/17/15

    1.  Write a program that performs the implementation step for the case
        study presented in Section 1.5.
        
        Problem: Determine the total cost of apples given the number of pounds
        of apples purchased and the cost per pound of apples.
        Run this using several sets of input data. Try special values such as 0
        and 1 for pounds of apples. */

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std;
                                // as defined by C++ standard library.

int main()                      /*  Exactly one main function per program.
                                    A function is a collection of related statements that perform a specific operation.
                                    int indicates the return/data type of the function.
                                    (  ) indicates no special information passed to the function by the operating system.
                                    program starts at main function. */
                                
{                               // { opens the main function.
    
    //  declaration statement - declaring the data the function needs:
    
    float poundsOfApples;                       // declaring the variables poundsOfApples, costOfApplesPerPound and totalCost as float reurn type
    float costOfApplesPerPound;
    float totalCost;
    
    cout << "Hello! This program is desgined to compute the total cost of apples ";                     // we inform the user what this program is desgined to do.
    cout << "given the number of pounds of apples purchased and the cost per pound of apples. \n\n";

 /*  Executable statements - allows the compiler to specify 
                            the actions the program will take. */
                                
cout << "Please enter the number of pounds of apples you purchased: ";      // we request that the user enter the number of pounds of apples they purchased.
    cin >> poundsOfApples;          // the user enters the number of pounds of apples they purchased * cin >> allows user to enter data the program will use*.
    
cout << "\n";   // skips lines, same as endl.

cout << "Please enter the the cost per pound of apples in dollars per pound: ";        // we request the user enter the the cost per pound of apples in dollars per pound.
    cin >> costOfApplesPerPound;                    // user enters the the cost per pound of apples in dollars per pound.
    
cout << "\n";    

totalCost = poundsOfApples * costOfApplesPerPound;      // the neccesary formula for calculating the total cost of the apples
                                                        // simply multiply the pounds of apples purchased by the cost of apples per pound.

cout << "The total cost of apples is: " << totalCost;   // we now read out to the user their total cost.
    
 return 0;   // closes program, informs program ran without errors.
}               // closes the main function.