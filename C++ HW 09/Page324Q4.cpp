/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         10/31/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 9
 
 Section 5.2 Page 270 Q1
 Section 5.3 Page 278 Programming Q1, Q2, Q3
 Section 5.4 Page 285 Programming Q1, Q2
 
 Page 324 Q3, Q4
 
 Page 324 Q4.)
 
 4. a. Write a program to read in a collection of exam scores ranging in value from 0 to 100.
 
 Your program should display the category of each score.
 
 It should also count and display the number of outstanding scores (90 to 100),
 the number of satisfactory scores (60 to 89),
 and the number of unsatisfactory scores (0 to 59).
 
 */

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float testGrade;
    int outStanding = 0;
    int satisfactory = 0;
    int unsatisfactory = 0;
    int exams;
    
    cout << "Enter the number of exams: ";
    
    cin >> exams;
    
    for (int control = 0;
         control < exams;
         control ++)
        
    {
        
        cout << "Enter test grade: ";
        
        cin >> testGrade;
        
        if ((testGrade >= 90) && (testGrade <= 100))
            
        {
            outStanding ++;
        }
        
        else if ((testGrade >= 60) && (testGrade <= 89))
            
        {
            satisfactory ++;
        }
        
        
        else if (testGrade <= 59)
            
        {
            unsatisfactory ++;
        }
        
        else
        {
            cout << "\nError! Enter valid number 0 - 100";
        }
        
    }
    
    cout << "\n\nOutstanding scores: " << outStanding;
    
    cout << "\nSatisfactory scores: " << satisfactory;
    
    cout << "\nUnsatisfactory scores: " << unsatisfactory;
    
    return 0;
    
}