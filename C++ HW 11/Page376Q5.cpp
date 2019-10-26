/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         11/14/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
Homework 11
Programming Projects: 
Page 344 Q4
Page 351 Q3
Page 376 Q1, Q2, Q5, Q8

 Page 376 Q5 -
 
 5. Patients required to take many kinds of medication often have difficulty in remembering when to take their medicine. 
 
    Given the following set of medications, write a function that prints an hourly table indicating what medication to take at any given hour. Use a counter variable clock to go through a 24-hour day. Print the table based on the following prescriptions:
 
 Medication         Frequency
 
 Iron pill          0800, 1200, 1800
 Antibiotic         Every 4 hours starting at 0400
 Aspirin            0800, 2100
 Decongestant       1100, 2000

*/

#include <iostream>

using namespace std;

void table();

int main()
{
    int clock = 0;
    int control = 2400;
    
    while (clock <= control)
    {
        
        if (clock == 0)
        {
            cout << "Medication         Frequency\n" << endl;
        }
        if (clock == 400)
        {
            cout << "Antibiotic           0400" << endl;
        }
        else if (clock == 800)
        {
            cout << "Iron pil             0800" << endl;
            cout << "Antibiotic           0800" << endl;
            cout << "Aspirin              0800" << endl;
        }
        else if (clock == 1100)
        {
            cout << "Decongestant         1100" << endl;
        }
        else if (clock == 1200)
        {
            cout << "Iron pill            1200" << endl;
            cout << "Antibiotic           1200" << endl;
        }
        else if (clock == 1600)
        {
            cout << "Antibiotic           1600" << endl;
        }
        else if (clock == 1800)
        {
            cout << "Iron pill            1800" << endl;
        }
        else if (clock == 2000)
        {
            cout << "Antibiotic           2000" << endl;
        }
        else if (clock == 2100)
        {
            cout << "Aspirin              2100" << endl;
            
        }
        else if (clock == 2400)
        {
            cout << "Antibiotic           2400" << endl;
        }
        
        clock += 100;
    }
    system ("pause");
    return 0;
}
