/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/23/2015
 
 MID-TERM
 
 Q1

 */

#include <iostream>

using namespace std;

int f = 5280;

int main()
{
    int s1;
    int s2;
    
    float stride;
    float stridesPerMin;
    float averageSPM;
    
    cout << "Please enter number of strides in minute 1: ";
    
    cin >> s1;
    
    cout << "Please enter the number of strides in minute 2: ";
    
    cin >> s2;
    
    averageSPM = (s1 + s2) * 0.5;
    
    stride = 2.5;
    
    stridesPerMin = stride * averageSPM;
    
    cout << "please enter the total hours arnie spent jogging: ";
    
    int totalH;
    
    cin >> totalH;
    
    cout << "please enter the total minutes arnie spent jogging: ";
    
    int totalM;
    
    cin >> totalM;
    
    float hourCon;
    
    hourCon = (totalH * 60)+ totalM;
    
    float totalStrides;
    
    totalStrides = hourCon * stridesPerMin;
    
    float stridesToMiles;
    
    stridesToMiles = totalStrides / f;
    
    cout << "Arnies distance traveled is: " << stridesToMiles << " miles.";
    
    system ("pause");
    return 0;
}

