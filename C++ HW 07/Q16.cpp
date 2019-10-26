 /*
 
  Programmer:   John m Berean
 
  Instructer:   Professor Ye
 
  Date:         10/17/2015
 
  Class:        CSP*141*001 (9165) Intro to Programming in C++
 
  Homework 7
 
  Section 4.7 Page 238 Programming Q4,Q6
  Section 4.8 Page 244 Programming Q1, Q2, Q3,Q4
  Page 253 Q12, Q16
 
 16. Write a program that calculates the user’s body mass index (BMI)
 and categorizes it as underweight, normal, overweight, or obese,
 based on the following table from the United States Centers for
 Disease Control:
 
 BMI Weight Status
 Below 18.5 Underweight
 18.5–24.9 Normal
 25.0–29.9 Overweight
 30.0 and above Obese
 To calculate BMI based on weight in pounds (wt_lb) and height in inches
 (ht_in), use this formula (rounded to tenths):
 
 (703 * wt_lb)/(ht_in)^2
 
 
 Prompt the user to enter weight in pounds and height in inches.
 
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float weight;
    
    float height;
    
    float BMI;

    cout << "program that calculates the user’s body mass index (BMI)\n"
    "and categorizes it as underweight, normal, overweight, or obese,\n"
    "based on the following table from the United States Centers for\n"
    "Disease Control:";
    
    cout << "Please enter the pounds: ";
    
    cin >> weight;
    
    cout << "Please enter the height in inches: ";
    
    cin >> height;
    
    // BMI = (703 * wt_lb)/(ht_in)^2
    
    BMI = (703 * weight)/(pow(height,2));
    
    if (BMI < 18.5)
    {
        cout << "Underweight";
    }
    
    else if ((BMI >= 18.5) && (BMI <= 24.9))
    {
        cout << "Normal";
    }
    
    else if ((BMI >= 25.0) && (BMI <= 29.9))
    {
        cout << "Overwiehgt";
    }
    
    else if (BMI < 30.0)
    {
        cout << "Obese";   
    }
    return 0;
}