/*
 
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/28/2015
 
 Homework 5
 Page 154 Section 3.5 Programming Q2, Q3
 Page164 Q1
 Project Problems Page 188 Q4 , Q7,Q8, Q10,Q12
 
 
 Page 154 Section 3.5 Programming Q2
 
 2.  Write a function that calculates the elapsed time in minutes
 between a start time and an end time expressed as integers on a 24-hour clock (8:30 P.M. = 2030).
 You need to deal only with end times occurring later on the same day as the start time.
 Also write a driver program to test your function.
 */



#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.
// Header <iostream that defines the standard input/output stream objects.

#include <cmath>
#include <string>

using namespace std;            // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

// Function prototypes

void instruct();

int timeCalculator(int,int);

int clock1(int);

int main()
{
    instruct();
    
    float departureTime;
    float arrivalTime;
    float elapsedTime;
    float departureTimeConverter;
    float arrivalTimeConverter;
    
    
    
    cout << "\n\n" << "Please enter the departure time: ";
    
    cin >> departureTime;
    
    cout << "\n\n" << "Please enter the arrival time: ";
    
    cin >> arrivalTime;
    
    departureTimeConverter = clock1(departureTime);
    
    arrivalTimeConverter = clock1(arrivalTime);
    
    elapsedTime = timeCalculator(departureTimeConverter, arrivalTimeConverter);
    
    cout << "\n\nYour elapsed time in minutes is: " << elapsedTime;
    
    return 0;
}

void instruct()
{
    cout <<
    
    " Hello!  This program calculates the elapsed time in minutes \n"
    " between a start time and an end time expressed as integers \n"
    " on a 24-hour clock (8:30 P.M. = 2030). ";
    
}

int clock1(int a)
{
    // departure time
    
    int h;
    int m;
    int totalMinute;
    
    h = a/100;
    m = a%100;
    
    totalMinute = (h*60+m);
    
    return (totalMinute);
}

int timeCalculator(int x, int y)
{
    return (y-x);
    
}