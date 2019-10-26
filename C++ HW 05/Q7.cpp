/*
 
 
 7. A cyclist coasting on a level road slows from a speed of 10 miles/hr to 2.5 miles/hr in one minute.
 Write a computer program that calculates the cyclist’s constant rate of deceleration
 and determines how long it will take the cyclist to come to rest, given an initial speed of 10 miles/hr.
 
 Hint: Use the equation:
 
 a=(vf -vi)/t,
 
 where a is acceleration, t is time interval, vi is initial velocity, and vf is the final velocity.)
 Write and call a function that displays instructions to the program user
 and another function that computes and returns the deceleration given vf, vi, and t.
 */


#include <iostream>

using namespace std;


void instructions();
float secondsLeft (float);
float accelerationRate(float,float, float);

int main()
{
    float vi;
    float vf;
    float t;
    float acceleration;
    float seconds;
    
    vi = 10.0;
    
    vf = 2.5;
    
    t = 1.0;
    
    acceleration = accelerationRate (vf, vi, t);
    
    seconds = secondsLeft(acceleration);
    
    cout << "The cyclist’s constant rate of deceleration is " << acceleration << " miles per hour every minute.";
    
    cout << "\n\n" << "It will take the cyclist an additional " << seconds << " seconds to come to a complete stop, given the initial speed of 10 miles/hr.";
    
    return 0;
}

void instructions()
{
    
    cout << "Hello! A cyclist coasting on a level road slows from a speed of 10 miles/hr to 2.5 miles/hr in one minute. \n"
    "This program calculates the cyclist’s constant rate of deceleration and determines how long it will take the cyclist \n"
    "to come to rest, given an initial speed of 10 miles/hr.";
    
}

float accelerationRate(float a, float b, float c)
{
    
    return ((a-b)/c);
    
}

float secondsLeft(float x)
{
    return (2.5/(x/-60));
    
}
