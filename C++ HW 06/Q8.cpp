/*
 
 Programmer: John m Berean                                                               Date: 10/17/2015
 
 Instructer: Professor Ye                           Class: CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 06
 
 Section 4.4 Page 219 Programming Q2
 Section 4.5 Page 229 Programming Q4
 Page 251 Q1 , Q5 Q8, Q9
 
 8.  The New Telephone Company has the following rate structure for long distance calls:
 
The regular rate for a call is $0.10 per minute.
 
Any call started at or after 6:00 P.M. (1800 hours) but before 8:00 A.M.(0800 hours) is discounted 50 percent.
 
Any call longer than 60 minutes receives a 15 percent discount on its cost (after any other discount is subtracted).
 
 All calls are subject to a 4 percent federal tax on their final cost.
 
 Write a program that reads the start time for a call based on a 24-hour clock and the length of the call.
 The gross cost (before any discounts or tax) should be printed, followed by the net cost (after discounts are deducted and tax is added).
 
 Use separate functions to print instructions to the program user and to compute the net cost.
 
 */

#include <iostream>

using namespace std;

void instructions();

float grossCost(float);
float netCost(float);

int main()
{
    
    instructions();
    
    float startTime;
    float lengthOfCall;
    float standardRate;
    
    float bill;
    float net;
    
    cout << "Please enter the start time: ";
    
    cin >> startTime;
    
    cout << "Please enter the length of the phone call in minutes:";
    
    cin >> lengthOfCall;
    
    standardRate = (lengthOfCall * 0.10);
    
    if ((startTime >= 800)||(startTime < 1800))
    {
        bill =(standardRate);
    }
    
    else if (((startTime >= 800)||(startTime < 1800))&&(lengthOfCall > 60))
    {
        
        // 15% discount   bill * (1-15%)
        
        bill = ((standardRate)*(1-0.15));
    }
    
    if ((startTime < 800)||(startTime >= 1800))
        
    {
        bill = ((standardRate)* 0.5);
    }
    
    else if (((startTime < 800)||(startTime >= 1800))&&(lengthOfCall > 60))
    {
        bill =((standardRate*0.5)*(1-0.15));
    }
    
    net = netCost(bill);
    
    cout << "\n\n" << "Your start time was: " << startTime;
    
    cout << "\n\n" << "Your length of the phone call was: " << lengthOfCall << " minutes.";
    
    cout << "\n\n" << "Your grossCost is: $" << standardRate;
    
    cout << "\n\n" << "Your net cost will be: $" << net;
    
    return 0;
}

void instructions()
{
    cout << "Hello! The New Telephone Company has the following rate structure for long distance calls: \n\n"
    
    "The regular rate for a call is $0.10 per minute. \n\n"
    
    "Any call started at or after 6:00 P.M. (1800 hours) but before 8:00 A.M.(0800 hours) is discounted 50 percent. \n\n"
    
    "Any call longer than 60 minutes receives a 15 percent discount on its cost (after any other discount is subtracted). \n\n"
    
    "All calls are subject to a 4 percent federal tax on their final cost. \n\n";
}

float netCost(float a)
{
    return ((a*0.04)+a);
}