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
 
 8. Revise the previous project to make it a menu-driven program. The menu operations supported by the revised program should be as follows:
 
 (E)nter inventory
 (P)urchase soda
 (S)ell soda
 (D)isplay inventory
 (Q)uit program
 
 Negative quantities should no longer be used to represent goods sold.
 
 */


#include <iostream>

using namespace std;

void instruct();

int main()
{
    char const SENTINEL = 'Q';
    
    char letter;
    
    instruct(); // E,P,S,D,Q
    
    cin >> letter;
    
    while (letter != SENTINEL)
    {
        int caseNum;
        
        cout << "Enter case ID number: ";
        
        cin >> caseNum;
        
        
        if (caseNumber == 1)
        {
            cocaCola = computeInventory(cocaCola);
        }
        else if (caseNumber == 2)
        {
            pepsi = computeInventory(pepsi);
        }
        else if (caseNumber == 3)
        {
            canadaDry = computeInventory(canadaDry);
        }
        else if (caseNumber == 4)
        {
            hires = computeInventory(hires);
        }
        
        
        
        cout << "\nEnter case ID number: ";
        
        cin >> caseNum;
    }
    
        
        
        
        
        
        
        
        
        return 0;
        
    }
    
    void instruct()
    {
        cout <<
        
        "Choose: \n"
        "(E)nter inventory \n"
        "(P)urchase soda \n"
        "(S)ell soda \n"
        "(D)isplay inventory \n"
        "(Q)uit program \n";
        
    }

    float enterInventory(int caseNumber)
{

    
    
}






















