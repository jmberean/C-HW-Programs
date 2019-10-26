/*
 
 10. Write a program to take a depth (in kilometers) inside the earth as input data; compute and display the temperature at this depth in degrees Celsius and Fahrenheit.
 
 The relevant formulas are
 
 Celsius = 10 × (depth) + 20 (Celsius temperature at depth in km)
 
 Fahrenheit = 1.8 × (Celsius) + 32
 
 Include two functions in your program.
 
 Function celsiusAtDepth should compute and return the Celsius temperature at a depth measured in kilometers.
 
 Function to Fahrenheit should convert a Celsius temperature to Fahrenheit.
 
 */

#include <iostream>

using namespace std;

float celsiusAtDepth(float);
float fahrenheitAtDepth(float);

int main()

{
    float celsius;
    float fahrenheit;
    
    
    float depth;
    
    cout << "Hello! This program takes a depth (in kilometers) inside the earth then computes and display the temperature at this depth in degrees Celsius and Fahrenheit. \n";
    
    cout << "Please enter the depth in kilometers: ";
    
    cin >> depth;
    
    celsius = celsiusAtDepth ( depth );
    
    fahrenheit = fahrenheitAtDepth ( celsius );
    
    cout << "\n\n" << "The temperature at this depth in degrees Celsius is: " << celsius << "\n\n";
    
    cout << "The temperature at this depth in degrees Fahrenheit is: " << fahrenheit;
    
    return 0;
}

/*Celsius=10*depth=20*/

float celsiusAtDepth(float depth)
{
    return(10*depth+20);
}

// Fahrenheit = 1.8 × (Celsius) + 32

float fahrenheitAtDepth (float celsius)
{
    return (1.8*(celsius)+32);
}