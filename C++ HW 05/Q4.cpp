/*
 
 
 
 4. Write a computer program that computes the duration of a projectile’s flight
 and its height above the ground when it reaches the target.
 
 As part of your solution, write and call a function that displays instructions to the program user.
 
 Problem Constant
 
 G = 32.17 // gravitational constant
 
 Problem Inputs
 
 float theta // input - angle (radians) of elevation
 float distance // input - distance (ft) to target
 float velocity // input - projectile velocity (ft/sec)
 
 Problem Outputs
 
 float time // output - time (sec) of flight float height // output - height at impact
 
 Relevant Formulas
 
 time = distance velocity × cos (theta)
 height = velocity × sin(theta) × time − g × time2 2
 
 Try your program on these data sets.
 
 ￼￼Inputs Data Set 1 Data Set 2
 Angle of elevation 0.3 radian 0.71 radian
 Velocity 800 ft/sec 1,600 ft/sec
 Distance to target 11,000 ft 78,670 ft
 
 */



#include <iostream>
#include <cmath>

using namespace std;

const float G = 32.17;

void instructions();

int main()
{
    
    instructions();
    
    float theta;                     // input - angle (radians) of elevation float distance
    float distance;                 // input - distance (ft) to target float velocity
    float velocity;                 // input - projectile velocity (ft/sec)
    float time;                     // output - time (sec) of flight float height
    float height;                   // output - height at impact
    
    cout << "\n\n" << "Please enter the angle in radians of elevation: ";
    
    cin >> theta;
    
    cout << "\n\n" <<  "Please enter the projectiles veloicity (ft/sec): ";
    
    cin >> velocity;
    
    cout << "\n\n" << "Please enter the distance, in feet, of the target: ";
    
    cin >> distance;
    
    
    // time = distance velocity × cos (theta)
    
    time = (distance / (velocity * cos(theta)));
    
    // height = velocity × sin(theta) × time − g × time2 2
    
    
    height = (velocity * sin(theta) * time - (G * pow(time, 2) / 2));
    
    cout << "\n\n" << "The duration of the projectile's flight is: " << time;
    
    cout << "\n\n" << "The projectile's height above the ground when it reaches the target is: " << height;
    
    return 0;
}

void instructions()
{
    cout <<
    
    "Hello! This program computes the duration of a projectile’s flight \n"
    "and its height above the ground when it reaches the target.";
    
}



