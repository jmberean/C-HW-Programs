/*
 
 1. Write a program that reads three strings
 and displays the strings in all possible sequences,
 one sequence per output line.
 Display the symbol * between the strings on each line.
 
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    
    string s1;
    string s2;
    string s3;
    
    cout << "Hello! This program reads in three strings"
    "and displays the strings in all possible sequences.";
    
    cout << "Please enter your first string of choice: ";
    
    cin >> s1;
    
    cout << "Please enter your second string of choice: ";
    
    cin >> s2;
    
    cout << "Please enter your third string of choice: ";
    
    cin >> s3;
    
    cout << s1 << "*" << s2 << "*"<< s3 << "\n";
    cout << s1 << "*" << s3 << "*"<< s2 << "\n";
    cout << s2 << "*" << s1 << "*"<< s3 << "\n";
    cout << s2 << "*" << s3 << "*"<< s1 << "\n";
    cout << s3 << "*" << s1 << "*"<< s2 << "\n";
    cout << s3 << "*" << s2 << "*"<< s1 << "\n";
    
    return 0;
}

