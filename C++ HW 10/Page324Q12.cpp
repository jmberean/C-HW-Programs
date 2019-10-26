/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         10/31/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 10
 
 Section 5.6 Page 298 Programming Q3
 Section 5.7 Page 301 Programming Q3
 Section 5.8 Page 305 Programming Q3
 Page 324  Q5 Q7, Q8, Q9, Q12
 
 12. Write a program that reads in a collection of strings and displays each string read with the vowels removed. For example, if the data strings are:
 hat
 dog
 kitten
 *** (sentinel)
 the output would be:
 ht dg kttn
 Write and call a function removeVowel with prototype string removeVowel(string);
 that returns its argument string with the vowels removed.
 
 */

#include <iostream>
#include <string>

using namespace std;

const string SENTINEL = "ZZZ";

string removeVowel(string);

int main()
{
    string b;
    string temp = "";
    string temporary = "";
    string temp2 = "";
    
    
    cout << "This program reads in a collection of strings and displays each string read with the vowels removed. And stops when ZZZ is entered.\n";
    
    cout << "\nEnter string: ";
    cin >> temporary;
    
    while(temporary != "ZZZ")
    {
        temp += temporary + "\n";
        
        b = removeVowel(temporary);
        
        temp2 += b + "\n";
        
        cout << "\nThe strings with removed vowels: \n" << b;
        
        cout << "\nEnter string: ";
        cin >> temporary;
        
    }
    
    cout << temp2;
    
    system ("pause");
    return 0;
}

string removeVowel(string a)
{
    for (int control = 0;
         (unsigned)control < a.length();
         control ++)
    {
        while ((a.at(control) == 'a')||(a.at(control) == 'e')||(a.at(control) == 'i')||(a.at(control) == 'o')||(a.at(control) == 'u')||(a.at(control) == 'y') || (a.at(control) == 'A')||(a.at(control) == 'E')||(a.at(control) == 'I')||(a.at(control) == 'O')||(a.at(control) == 'U')||(a.at(control) == 'Y'))
        {
            a.erase(control,1);
        }
    }
    return (a);
}