/*
 
 
 
 12. Write a program that calculates and displays the volume of a box and the surface area of a box.
 
 The box dimensions are provided as input data.
 
 The volume is equal to the area of the base times the height of the box.
 
 Define and call a function rectangleArea to calculate the area of each rectangle in the box.
 
 
 volume = l * w * h
 
 surface area = 2lh + 2wh + 2lw
 
 */


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float volume(float, float, float);

float surfaceArea(float, float, float);

int main()
{
    float length;
    float width;
    float height;
    
    float volumeCalculator;
    
    float surfaceAreaCalculator;
    
    
    cout << "This program calculates and displays the volume of a box and the surface area of a box. \n\n";
    
    cout << "Please enter the length: ";
    
    cin >> length;
    
    cout << "\n\n" << "Please enter the width: ";
    
    cin >> width;
    
    cout << "\n\n"<< "Please enter the height: ";
    
    cin >> height;
    
    volumeCalculator = volume (length, width, height);
    
    surfaceAreaCalculator = surfaceArea (length, width, height);
    
    cout << "\n\n" << "The volume of the box is : " << volumeCalculator << "\n\n";
    
    cout << "The surface area of the box is: " << surfaceAreaCalculator;
}

// volume = l * w * h

float volume (float a, float b, float c)
{
    
    return (a*b*c);
    
}

// surface area = 2lh + 2wh +  2lw

                  //length     Width    Height

float surfaceArea (float a, float b, float c)
{
    
    return (2*a*c + 2*b*c + 2*a*b);
    
}


