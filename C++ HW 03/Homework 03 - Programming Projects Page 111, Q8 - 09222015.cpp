/*
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/22/2015
 
 Homework 03 - Programming Projects: Page 111, Q8
 
    8.  Arnie likes to jog in the morning.
        As he jogs, he counts the number of strides he makes during the first minute
        and then again during the last minute of his jogging.
 
        Arnie then averages these two and calls this average the number of strides he makes in a minute when he jogs.
 
        Write a program that accepts this average and the total time Arnie spends jogging
        in hours and minutes and then displays the distance Arnie has jogged in miles.
 
 Assume Arnie’s stride is 2.5 feet (also a data item).
 There are 5280 feet in a mile (a constant). */

// file: Homework 03 - Programming Projects: Page 111, Q8.cpp
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
    
    float const MILE = 5280, arniesStride = 2.5;        // float const - variable is a real number data return type and it is constant throughout the program
    
    int minuteA, minuteB, averageStridesPerMinute, hours, minutes, timeA, timeB;     // integer data return type for the variable
    
    float distanceFeet, distanceInMiles, feetPerMinute;         // float - real numbers
    
    //  Executable statements - allows the compiler to specify the actions the program will take.
    
    cout << "Please enter the number of strides Arnie makes during the first minute: ";        // we request the user to enter the number of strides he makes during the first minute
    
    cin >> minuteA;     // user enter the number of strides he makes during the first minute, declared to varibale minuteA
    
    cout << "Please enter the number of strides he makes during the last minute of his jogging: ";      // we request the user to enter the number of strides he makes during the last minute of his jogging
    
    cin >> minuteB;     // user enters the number of strides he makes during the last minute of his jogging, declare to minuteB
    
    
    // formula for calculating the average strides per minute
    averageStridesPerMinute = (minuteA+minuteB)/2;          // by taking the two strides and dividing by 2 you get the average value
    
    // we discover the feet per minute by multiplying the average amount of strides arnie takes in one minute
    // by arnies total stride which is 2.5 feet
    
    feetPerMinute = averageStridesPerMinute*arniesStride;
    
    cout << "Please enter the total hours arnie spends jogging: ";      // we reuest the user to enter the total hours arnie spends jogging
    
    cin >> hours;    //   user enters the total hours arnie spends jogging
    
    cout << "Please enter the total minutes arnie spends jogging: ";    // we request the user enter the total minutes arnie spends jogging
    
    cin >> minutes; // user enters enter the total minutes arnie spends jogging
    
    timeA=hours*60;     // to convert the hours into minutes we multiply the hours by 60, because each hour has 60 minutes
    
    timeB=timeA+minutes;    // to discover the total minutes after converting the hours into minutes
    // simply add the two
    
    distanceFeet= timeB*feetPerMinute;      // the distance in feet is the total time in minutes multiplied by the average feet arnies travels in a minute
    
    distanceInMiles = distanceFeet/MILE;    // now we take the total distance hes covered in feet and divide by the const (MILE) to discover the conversion of feet to miles
    
    cout << "Your distance in miles is" << distanceInMiles << ". Thank you and have a nice day.";     // we read out to the user their distance in miles
    
    return 0;   // closes program, ran with no errors
}           // closes function
