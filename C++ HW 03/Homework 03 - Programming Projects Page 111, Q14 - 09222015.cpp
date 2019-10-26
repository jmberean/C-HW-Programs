/*
John m Berean 
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++ 
09/22/2015

Homework 03 - Programming Projects: Page 111, 14 

       14.  Write a program that asks a user to enter the distance of a trip in miles,
            the miles per gallon estimate for the user’s car, 
            and the average cost of a gallon of gas. 
            
            Your program should calculate and display the number
            of gallons of gas needed and the estimated cost of the trip. */
            
// file: Homework 03 - Programming Projects: Page 111, 14.cpp
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
    
    float distance, mpg, gallonOfGas, totalGallons, totalCost;      // float - real number data return type
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    cout << "Hello! calculate the number of gallons of gas needed "    // we inform the user what the program is designed to do
            "and the estimated cost of gas for the road trip.";
    
    cout << "Fisrt please enter enter the distance of your trip in miles: ";            // we request the user to enter the total distance expected to travel
    
        cin >> distance;            // user enters data for the variable / distance
        
    cout << "Secondly please enter the miles per gallon estimate for the car: ";        // we request the user to enter their cars estimated mpg
    
        cin >> mpg;                 // user enters data for the variable / mpg
        
    cout << "Lastly please enter the average cost of a gallon of gas, in dollars: ";    // we request the user to enter the average cost of a gallon of gas
    
        cin >> gallonOfGas;         // user enters data for the variable / gallonOfGas
        
    // to find the the number of gallons of gas needed and the estimated cost of the trip
    // we must divide the distance (in miles) by the mpg (miles per gallon)
    // to get the estimated cost of the trip
    
    totalGallons = distance / mpg;        // total distance divided by the miles per gallon
    
    totalCost = totalGallons * gallonOfGas;     // the total cost of the trip is the total gallons needed multiplied by the cost of a gallon of gas
    
    cout << "The estimated cost of your trip will be: $" << totalCost;      // we output the information to the user
    
    cout << "Thank you! And have a nice day!";                  // we must thank the user for their time
    
    return 0;   // closes program, ran with no errors
}           // closes function