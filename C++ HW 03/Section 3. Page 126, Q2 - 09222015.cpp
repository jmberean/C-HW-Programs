/*
John m Berean
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++
09/22/2015
Homework 03 - PAGE 126 Q2, Self-Check
 
        1.  Describe the data requirements and algorithm for a program that computes
            the number of miles you can drive a car given the estimated number
            of miles per gallon and the number of gallons of gas you purchased
            as input data. 
            Also compute and display the cost of the gasoline based on the cost per gallon (a data item).
            
        2.  Write a program outline from the algorithm you developed in Exercise 1.
            Show the declaration part of the program and the program comments
            corresponding to the algorithm and its refinements. */

// file: Homework 03 - PAGE 126 Q2, Self-Check.cpp
// this program will calculate and display the number of gallons of gas needed and the estimated cost of the trip

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
    float totalGallons;     // the total gallons purchased
    float distance;         // the total distance in miles traveled
    float totalCost;        // the total cost of gasoline
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    cout << "Hello! This program computes the number of miles you can drive a car"
    "\n given the estimated number of miles per gallon and the number of gallons of gas you purchased."     // we inform the user what the program is designed to do
    
    "\nPlease enter the estimated miles per gallon: ";
    
        cin >> mpg;                 // user enters the cars miles per gallon

    cout << "\nplease enter the number of gallons of gas purchased: ";          // we request the user to enter the number of gallons of gas purchased
    
        cin >> totalGallons;        // user enters the number of gallons of gas purchased
    
    cout << "\nPlease enter the price per gallon: "                             // we request the user to enter the price per gallong of gas
    
        cin >> gallonPrice;         // user enters the price per gallon
    
    // to calculate the total distance the car can travel we multiply the miles per gallon by the total gallons purchased
    
    distance = mpg*gallonsOfGas;        // formula program uses
    
    // the total cost will be the total miles the car can drive divided by the price of a gallon of gas
    
    totalCost = distance / gallonPrice;    // formula program uses
    
    cout << "\n\nThe estimated total miles you can drive your car is: " << distance << "miles";         // we inform the user the total distance the car can drive given the mpg and total gallons purchased
    
    cout << "\n\nThe total cost of gasoline is: " << totalCost;         // we inform the user of the total cost of the gas given the price of per gallon of gasoline
    
    return 0;   // closes program, ran with no errors
}           // closes function