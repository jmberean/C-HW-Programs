/*
John m Berean
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++
09/28/2015
Homework 4

Section 3.4 Page 143  Q4

    4.  Rewrite the miles-to-kilometers conversion program shown in Figure 2.1,
        so that it includes a function that displays instructions to its user.
 
        Listing 2.1 Converting miles to kilometers */

// miles.cpp
// Converts distance in miles to kilometers.

#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.
                                // Header <iostream that defines the standard input/output stream objects.

using namespace std;        // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

void instructions();        // function prototype

int main() // start of main function
{
    const float KM_PER_MILE = 1.609; // 1.609 km in a mile float miles, // input: distance in miles
    
    float kms;      // Variable for kilometers. float real number data type
    float miles;
    
    instructions();
    
    cin >> miles;
    
    // Convert the distance to kilometers.
    
    kms = KM_PER_MILE * miles;
    
    // Display the distance in kilometers.
    
    cout << "\n\n" << "The distance in kilometers is " << kms << endl;
    
    return 0;   // Closes program returns controls to the operating system
    
} // Exit main function

void instructions()
{
    
    cout << "Hello! This program converts distance in miles to kilometers.\n\n";
    
    cout << "Please enter the distance in miles: ";
    
}
