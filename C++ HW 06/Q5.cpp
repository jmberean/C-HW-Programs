/*
 
 Programmer: John m Berean                                                               Date: 10/17/2015
 
 Instructer: Professor Ye                           Class: CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 06
 
 Section 4.4 Page 219 Programming Q2
 Section 4.5 Page 229 Programming Q4
 Page 251 Q1 , Q5 Q8, Q9
 
 5. Write a program to simulate a state police radar gun.
 The program should read an automobile speed and print the message "speeding" if the speed exceeds 55 mph.
 
 
 */

#include <iostream>

using namespace std;

int main()
{
    
    float speed;
    cout <<"Please enter the speed: ";
    cin >> speed;
    
    if (speed > 55)
        cout << "SPEEDING" <<endl;
    return 0;
}