/*
 
 Programmer: John m Berean                                                               Date: 10/17/2015
 
 Instructer: Professor Ye                           Class: CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 06
 
 Section 4.4 Page 219 Programming Q2
 Section 4.5 Page 229 Programming Q4
 Page 251 Q1 , Q5 Q8, Q9
 
 1. Write functions to draw a circle, square, and triangle.
 Write a program that reads a letter C, S, or T and, depending on the letter chosen, draws either a circle, square, or triangle.
 
 */

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void circle();
void triangle();
void square();

int main()
{
    char L;
    
    
    cout << "Hello! This program reads in a letter C, S, or T and, depending on the letter you have chosen,\n"
    "draws either a circle, square, or triangle.\n\n"
    
    "Please enter C,S, or T: ";
    
    cin >> L;
    
    cout << "\n\n";
    
    if (L == 'C')
        
        circle();
    
    else if (L == 'S')
        
        square();
    
    else if(L == 'T')
        
        triangle();
    
    return 0;
}

void circle()

{
    cout <<
    
    "          #########         \n"
    "        ###       ###       \n"
    "      ###           ###     \n"
    "     ###             ###    \n"
    "     ###             ###    \n"
    "     ###             ###    \n"
    "      ###           ###     \n"
    "        ###       ###       \n"
    "          #########         \n";
}

void triangle()

{
    cout <<
    
    "              #             \n"
    "             ###            \n"
    "            ## ##           \n"
    "           ##   ##          \n"
    "          ##     ##         \n"
    "         ##       ##        \n"
    "        ##         ##       \n"
    "       ##           ##      \n"
    "      ###           ###     \n"
    "     ###################    \n";
    
}

void square()

{
    
    cout <<
    
    "    ################   \n"
    "    ##            ##   \n"
    "    ##            ##   \n"
    "    ##            ##   \n"
    "    ##            ##   \n"
    "    ##            ##   \n"
    "    ##            ##   \n"
    "    ################   \n";
    
}
