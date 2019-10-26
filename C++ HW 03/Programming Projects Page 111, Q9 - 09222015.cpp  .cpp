/*
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/22/2015
 
 Homework 03 - Programming Projects: Page 111, Q9
 
 9.   Write a program that reads a number of seconds between 0 and 18,000
 (5 hours) and displays the hours, minutes, and seconds equivalent. */

// file: Homework 03 - Programming Projects: Page 111, Q9.cpp
// this program reads a number of seconds between 0 and 18,000 (5 hours) and displays the hours, minutes, and seconds equivalent

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std; as defined by C++ standard library.

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    //  Declaration statements - declaring the data the function needs.
    
    int seconds;    // total seconds
    int minutes;    // minutes = seconds / 60
    int hours;       // hours = minutes / 60
    int minutesR;   // minutes remainder
    int secondsR;
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    // we inform the user this program reads a number of seconds between 0 and 18,000 (5 hours) and displays the hours, minutes and seconds equivalence.
    
    cout << "Hello! This program converts a number of seconds between 0 and 18,000 (5 hours) \n"
    "and displays the hours, minutes, and seconds equivalent.\n\n";
    
    cout << "Please enter a number of seconds between 0 and 18,000 (5 hours): ";       // we request the user to enter their data
    
    cin >> seconds;                                 // user enters inputs the data
    
    minutes = seconds / 60;             // formula for discovering the conversion of seconds to minutes, there are 60 seconds in a minute so we divide the total seconds by 60
    
    hours = minutes / 60;               // there are 60 minutes in a hour so we divide the total minutes by 60 ,as well, to discover the total hours
    
    cout << "\n\n";                     // skips lines, same as endl;
    
    // once our user has entered the data required for ( int minutes ) we can now compute the total minutes specific to the inserted data
    // ( % ) remainder symbol
    
    minutesR = minutes % 60;            // by dividing the total minutes by 60 we discover the remainder is the total minutes remaining
    
    
    secondsR = seconds % 60;            // by dividing the total seconds by 60 we discover the remainder is the total seconds remaining
    
    
    
    cout << seconds << " seconds is equivalent to " << hours << " hours " << minutesR << " minutes " << secondsR << " seconds.";
    
    return 0;
}