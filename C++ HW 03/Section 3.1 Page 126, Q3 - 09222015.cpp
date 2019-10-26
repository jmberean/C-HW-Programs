/*
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/22/2015
 
 Page 126 Q3, Self-Check
 
 1.  Describe the data requirements and algorithm for a program that computes
 the number of miles you can drive a car given the estimated number
 of miles per gallon and the number of gallons of gas you purchased
 as input data.
 Also compute and display the cost of the gasoline based on the cost per gallon (a data item).
 
 2. Write a program outline from the algorithm you developed in Exercise 1.
 Show the declaration part of the program and the program comments
 corresponding to the algorithm and its refinements.
 
 3. Change the solution to Exercise 1 to calculate the estimated cost of a trip
 given the distance of the trip, the estimated number of miles per gallon,
 and the average cost of a gallon of gasoline.*/

// file: Homework 03 - Page 126 Q3, Self-Check.cpp

/*  this program will calculate the estimated cost of a trip
 given the distance of the trip, the estimated number of miles per gallon,
 and the average cost of a gallon of gasoline. */

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std; as defined by C++ standard library.

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    //  Declaration statements - declaring the data the function needs.
    
    float mpg;              // the total miles per gallon the car gets
    float gallonPrice;      // the total cost of a gallon of gas
    float distance;         // the total distance in miles traveled
    float gallonsRequired;  // the total gallons required to accomplish the trip
    float totalCost;        // the total cost of gasoline
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    cout << "Hello! This program will calculate the estimated cost of a trip\n"
    
    "given the distance of the trip,\n"
    "the estimated number of miles per gallon,\n"
    "and the average cost of a gallon of gasoline.\n\n";                                     // we inform the user what the program is designed to do
    
    cout << "Please enter the distance of the trip in miles: ";
    
    cin >> distance;
    
    cout << "\nPlease enter the estimated miles per gallon: ";
    
    cin >> mpg;                 // user enters the cars miles per gallon
    
    cout << "\nPlease enter the price per gallon: ";                             // we request the user to enter the price per gallong of gas
    
    cin >> gallonPrice;         // user enters the price per gallon
    
    // to calculate the gallons required, we divide the distance by the miles per gallon of gas the car attains
    
    gallonsRequired = distance / mpg;        // formula program uses
    
    // the total cost will be the gallons required multiplied by the price of a gallon of gas
    
    totalCost = gallonsRequired*gallonPrice;
    
    // the total cost will be the total gallons required multiplied by the price of a gallon of gas
    
    totalCost = distance / gallonPrice;    // formula program uses
    
    cout << "\n\nThe estimated cost of your trip is: $" << totalCost;         // we inform the user the total distance the car can drive given the mpg and total gallons purchased
    
    cout << "\n\nThe total cost of gasoline is: " << totalCost;         // we inform the user of the total cost of the gas given the price of per gallon of gasoline
    
    return 0;   // closes program, ran with no errors
}           // closes function