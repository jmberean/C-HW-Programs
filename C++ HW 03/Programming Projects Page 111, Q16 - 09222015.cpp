/*
John m Berean
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++
09/22/2015

    16.     Write a program that calculates mileage reimbursement for a salesperson
            at a rate of $.35 per mile. Your program should interact with the
            user in this manner:*/

// file: Homework 03 - Programming Projects: Page 111, Q16.cpp
// this program displays the distance arnie has jogged in miles.

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std; as defined by C++ standard library.

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    //  Declaration statements - declaring the data the function needs.
    
    // declaring float data type for the variables
    
    float begginingO;       // beggining odometer reading
    float endingO;          // the ending odometer reading
    
    float MILES_TRAVELED;   // the total miles traveled = ending odometer reading - beggining odometer reading
    float PAY_PER_MILE;     // the pay of $0.35 for every counted mile
    
    cout << "Hello! This program calculates the mileage reimbursement at a rate of $0.35 per mile. \n\n";       // we inform the user this program calculates the mileage reimbursement at                                                   a rate of $0.35 per mile.
    cout << "Please enter the beggining odometer reading: ";        // we request the user to enter the beggining odometer reading
    
        cin >> begginingO;      // user enters beggining odometer reading
        
    cout << "Please enter the ending odometer reading: ";           // we request the use to enter the ending odometer reading
    
        cin >> endingO;         // user enters the ending odometer reading
        
        MILES_TRAVELED = endingO - begginingO;                      // formula for calculating the total miles traveled, subtracting the ending odometer reading by the beggining odometer reading
        
    cout << "You traveled " << MILES_TRAVELED << " miles, at a rate of $.35 per mile.";     // we inform the user of the miles traveled and the rate of pay per mile which is $0.35
    
        PAY_PER_MILE = (MILES_TRAVELED * 0.35);                     // to calculate the pay per mile we simply multiply the total miles traveled by the pay per mile
    
    cout << "Your total reimbursement is $" << PAY_PER_MILE << ".\n\n";                     // we inform the user of the total reimbursement in dollars
    
    cout << "Thank you. And have a nice day.";                      // we thank the user
    
return 0;                   // closes program
}                   // closes function