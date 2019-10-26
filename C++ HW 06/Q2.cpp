/*
 
 Programmer: John m Berean                                                               Date: 10/17/2015
 
 Instructer: Professor Ye                           Class: CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 06
 
 Section 4.4 Page 219 Programming Q2
 Section 4.5 Page 229 Programming Q4
 Page 251 Q1 , Q5 Q8, Q9
 
 2. Write an interactive program that contains a compound if statement and may be used to compute
 the area of a square (area = side2) or
 triangle (area = 1/2 × base × height)
 
 after prompting the user to type the first character of the figure name (t or s).
 
 */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void instructions();

int main()
{
    char L;
    
    float sideS;
    float areaS;
    
    float base;
    float height;
    float areaT;
    
    instructions();
    
    cout << "\n\n" << "If you want the area of a square ( area = side2 ) please enter s, or the area of a triangle please enter t ";
    
    cin >> L;
    
    if (L == 's')
    {
        cout << "\n\n" << "Please input the the side: ";
        
        cin >> sideS;
        
        areaS = (pow(sideS,2));
        
        cout << "\n\n" << "The area of the square is: " << areaS;
    }
    
    else if (L == 't')
    {
        cout << "\n\n" << "Please enter the base of the triangle:";
        
        cin >> base;
        
        cout << "\n\n" << "Please enter the height of the triangle:";
        
        cin >> height;
        
        areaT = (0.5)*base*height;
        
        cout << "\n\n" << "The area of the triangle is: " << areaT;
    }
    
    return 0;
}

void instructions()
{
    cout << "Hello! This program contains a compound if statement and may be used to compute \n";
    cout << "the area of a square (area = side2) or \n";
    cout << "the area of a triangle (area = 1/2 × base × height).\n";
    cout << "By typing the first character of the figure name (t or s).";
}