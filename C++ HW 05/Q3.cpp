/*
 3. Assume your friend has solved Programming Exercise 2. Write another function that uses your friend’s function to calculate the speed (km/h) one must average to reach a certain destination by a designated time.
 
 Function inputs include
 
 same-day departure and
 arrival times
 
 as integers on a 24-hour clock and
 
 the distance to the destination in kilometers.
 
 
 
 Also write a driver program to test your function.
 
 
 
 
 
 */

#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.
// Header <iostream that defines the standard input/output stream objects.
using namespace std;            // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

// Function prototypes

void instruct();

int clock1 (int);
int timeCalculator(int,int);
float speedCalculator(float, int);

int main()
{
    instruct();
    
    int departureTime;
    int arrivalTime;
    float distance;
    int elapsedTime;
    float speedNeeded;
    
    cout << "\n\n";
    
    cout << "Please enter the departure time: ";
    
    cin >> departureTime;
    
    cout << "Please enter the arrival time: ";
    
    cin >> arrivalTime;
    
    cout << "\n\n";
    
    cout << "Please enter the distance to the destination in kilometers: ";
    
    cin >> distance;
    
    cout << "\n\n";
    
    elapsedTime = timeCalculator(departureTime, arrivalTime);
    
    speedNeeded = speedCalculator(distance, elapsedTime);
    
    cout << "The average speed neccesary to reach a certain destination by the designated times is: " << speedNeeded << " kilometers per hour.";
    
    
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
    return (clock1(y) - clock1(x));
    
}

float speedCalculator (float x, int y)
{
    
    return(x/(y/60.0));
    
}