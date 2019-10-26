/*
John m Berean
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++
09/22/2015
 
Homework 03 - Section 2.6 Page 98 Q3
 
    3.  PROBLEM
        You are writing software for the machines placed at the front of supermarkets
        to convert change to personalized credit slips. In this version, the user
        will manually enter the number of each kind of coin in the collection, but in
        the final version, these counts will be provided by code that interfaces with
        the counting devices in the machine.
 
 ANALYSIS
 To solve this problem, you need to get the customer’s name to personalize
 the credit slip. You also need the count of each type of coin (dollars, quarters,
 dimes, nickels, pennies). From those counts, you determine the total
 value of coins in cents. Next, you can do an integer division using 100 as
 the divisor to get the dollar value; the remainder of this division will be the
 loose change that she should receive. In the data requirements table below,
 you list the total value in cents (totalCents) as a program variable
 because it is needed as part of the computation process but is not a
 required problem output. */

// file: Homework 03 - Section 2.6 Page 98 Q3 - 09/22/2015.cpp
// This program computes coins into dollars and change

#include <iostream>             // compiler directive including input output stream.

#include <string>               // string: allows user to enter an array/string of charecters into the program for use

using namespace std;            // this program uses objects defined by a standard namespace std; as defined by C++ standard library.

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    //  Declaration statements - declaring the data the function needs.
    
    string name;                                    // user’s first name
    
    // program variables - Variable's are needed to store a computations in a program.
    
    // declaring the variables as integer data types
    
    int pennies;       // number of pennies
    int nickels;       // number of nickels
    int dimes;         // number of dimes
    int quarters;      // number of quarters
    int halfDollars;   // number of half-dollars
    int dollars;       // number of dollar-coins
    int twoDollars;    // number of two-dollar coins
    
    // Problem Output
    
    int totalDollars;       // the number of dollars
    int change;             // the change
    int totalCents;         // the total number of cents
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    cout << "Hello! And welcome to your local change converter! This machine will convert your change, inlcuding \n";                   // informing the user what the program is designed to do
    cout << "pennies, nickels, dimes, quarters, half-dollars, and two-dollar coins, into a personalized credit slip. \n";               // informing the user on further instructions on how to use this system
    cout << "You will need to take the slip inside to a cashier so they may convert it into money. \n\n";
    cout << "Please enter your first name: ";
    cin >> name;                                    // user enters first name.
    
    cout << "\n\n";                         // skips lines
    
    cout << "Hello " << name << " first you will need to enter the number of each kind of coin in your collection. \n";
    cout << "If you do not have a certain type of coin, please enter 0. \n\n";
    
    cout << "Please enter the number of pennies: ";             // we are now requesting and allowing the user to read in the count of each pennie.
    cin >> pennies;
    
    cout << "Please enter the number of nickels: ";             // we are now requesting and allowing the user to read in the count of each nickel.
    cin >> nickels;
    
    cout << "Please enter the number of dimes: ";               // we are now requesting and allowing the user to read in the count of each dime.
    cin >> dimes;
    
    cout << "Please enter the number of quarters: ";            // we are now requesting and allowing the user to read in the count of each quarter.
    cin >> quarters;
    
    cout << "Please enter the number of half-dollar coins: ";   // we are now requesting and allowing the user to read in the count of each half-dollar coin.
    cin >> halfDollars;
    
    cout << "Please enter the number of dollar coins: ";        // we are now requesting and allowing the user to read in the count of each dollar coin.
    cin >> dollars;
    
    cout << "Please enter the number of two-dollar coins: ";    // we are now requesting and allowing the user to read in the count of each two-dollar coin.
    cin >> twoDollars;
    
    // We will now find the value of each kind of coin in pennies and add these values.
    // Formulas:
    totalCents = (200 * twoDollars) + (100 * dollars) + (50 * halfDollars) + (25 * quarters) + (10 * dimes) + (5 * nickels) + pennies;  // - one two-dollar coin = 200 pennies
    // - one one-dollar coin = 100 pennies
    // - half-dollar coin = 50 pennies
    // - one quarter = 25 pennies
    // - one dime = 10 pennies
    // - one pennie = 1 pennie
    // Now we will take the added value in pennies and divide by 100 to convert the cents into dollars
    
    totalDollars = totalCents / 100;                // neccesary formula to convert the total cents into dollars
    
    // We take the added value again and divide by the % to compute the remainder
    
    change = totalCents % 100;                      // neccesary formula to find the change
    
    cout << "\n\n";
    
    cout << "Good work " << name << "! Your collection is worth: $" << totalDollars << " dollars and " << change << " cents.\n\n";           // we inform the user their total dollars and cents
    
    cout << "Please bring your ticket inside to a cashier for conversion. Thank you " << name << "! And have a nice day!";          // follow up with further instructions on how to claim their money
    
    return 0;       // closes program, ran fine without erros
}           // closes function