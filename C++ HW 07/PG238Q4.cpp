/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/17/2015
 
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 7
 
 Section 4.7 Page 238 Programming Q4,Q6
 Section 4.8 Page 244 Programming Q1, Q2, Q3,Q4
 Page 253 Q12, Q16
 
 4.  The Air Force has asked you to write a program to label super sonic aircraft as military or civilian.
 Your program is to be given the plane’s observed speed in kilometers per hour (km/h) and its estimated length in meters.
 ￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼
 For planes traveling in excess of 1100 km/h, you’ll label those longer than 52 meters "civilian" and those shorter as "military".
 For planes traveling at slower speeds, you’ll issue an "aircraft type unknown" message.
 
 */

#include <iostream>

using namespace std;

int main()
{
    
    float speed;
    float length;
    
    cout << "Hello! This program labels super sonic aircraft as military or civilian. \n"
    "Based on the plane’s observed speed in kilometers per hour (km/h) and its estimated length in meters.\n\n";
    
    // plane’s observed speed in kilometers per hour (km/h)
    
    cout << "Please enter the speed in kilometers per hour (km/h): ";
    
    cin >> speed;
    
    // estimated length in meters
    
    cout << "\n\n" << "Please enter the estimated length in meters: ";
    
    cin >> length;
    
    // label super sonic aircraft as military or civilian.
    
    // For planes traveling in excess of 1100 km/h, you’ll label those longer than 52 meters "civilian" and those shorter as "military"
    
    if ((speed> 1100) && (length > 52))
        
    {
        cout << "civilian";
    }
    
    else if ((speed> 1100) && (length < 52))
        
    {
        cout << "military";
    }
    
    // For planes traveling at slower speeds, you’ll issue an "aircraft type unknown" message.
    
    if (speed < 1100)
        
    {
        cout << "aircraft type unknown";
    }
    
    return 0;
}




