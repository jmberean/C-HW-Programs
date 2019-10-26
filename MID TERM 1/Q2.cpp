/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/23/2015
 
 MID-TERM
 
 Q2
 
 */

#include <iostream>

using namespace std;

float celsiusAtDepth(float);

float farheinheitAtDepth(float);

int main()
{
    float depth;
    
    float tempF;
    
    float tempC;
    
    cout << "Enter depth: ";
    
    cin >> depth;
    
    tempC = celsiusAtDepth(depth);
    
    tempF = farheinheitAtDepth(tempC);
    
    cout << "Celsius at depth is: " << tempC;
    
    cout << "\n\n" << "Farheinheit at depth is: " << tempF;
    
    system ("pause");
    return 0;
    
}
float celsiusAtDepth(float d)
{
    float C;
    
    C = 10 * (d) + 20;
    
    return C;
}
float farheinheitAtDepth(float c)
{
    float T;
    
    T = 1.8 * (c) + 32;
    
    return T;
}