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
#include <iomanip>

void instruct();
int inventory();
int sodaSold();
int sodaPurchased();
int getID();

float computeInventory(int);

using namespace std;

int main()
{
    char const SENTINEL = 'Q';
    int cocaCola = 0;
    int pepsi = 0;
    int canadaDry = 0;
    int hires = 0;
    
    instruct();
    
    char controlLetter;
    
    cin >> controlLetter;
    
    while (controlLetter != SENTINEL)
    {
        int caseNum;
        
        caseNum = getID();
        
        if (controlLetter == 'E')
        {
            switch(caseNum)
            {
                case 1:
                    cout << "Enter inventory for CocaCola: " << endl;
                    cocaCola = inventory();
                    break;
                case 2:
                    cout << "Enter inventory for Pepsi: " << endl;
                    pepsi = inventory();
                    break;
                case 3:
                    cout << "Enter inventory for CanadaDry: " << endl;
                    canadaDry = inventory();
                    break;
                case 4:
                    cout << "Enter inventory for Hires: " << endl;
                    hires = inventory();
                    break;
                default:
                    cout << "You typed the wrong ID for product, please try again." << endl;
            }
            
        }
        else if(controlLetter == 'P')
        {
            switch(caseNum)
            {
                case 1:
                    cocaCola += sodaPurchased();
                    break;
                case 2:
                    pepsi += sodaPurchased();
                    break;
                case 3:
                    canadaDry += sodaPurchased();
                    break;
                case 4:
                    hires += sodaPurchased();
                    break;
                default:
                    cout << "You typed the wrong ID for product, please try again." << endl;
                    
            }
        }
        else if(controlLetter == 'S')
        {
            switch(caseNum)
            {
                case 1:
                    cocaCola -= sodaSold();
                    break;
                case 2:
                    pepsi -= sodaSold();
                    break;
                case 3:
                    canadaDry -= sodaSold();
                    break;
                case 4:
                    hires -= sodaSold();
                    break;
                default:
                    cout << "You typed the wrong ID for product, please try again." << endl;
            }
        }
        else if(controlLetter == 'D')
        {
            switch(caseNum)
            {
                case 1:
                    cout << "The inventory for CocaCola: " << cocaCola << endl;
                    break;
                case 2:
                    cout << "The inventory for Pepsi: " << pepsi << endl;
                    break;
                case 3:
                    cout << "The inventory for CanadaDry: " << canadaDry << endl;
                    break;
                case 4:
                    cout << "The inventory for Hires: " << hires << endl;
                    break;
                default:
                    cout << "You typed the wrong ID for product, please try again." << endl;
            }
            
        }
        
        instruct();
        cin >> controlLetter;
    }
    
    cout << "\nCase inventory - CocaCola " << cocaCola << endl;
    cout << "Case inventory - Pepsi " << pepsi << endl;
    cout << "Case inventory - CanadaDry " << canadaDry << endl;
    cout << "Case inventory - Hires " << hires << endl;
    
    
    system ("pause");
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

int inventory()

{
    int inv;
    
    cin >> inv;
    
    return inv;
}

int sodaPurchased()

{
    
    int purchased;
    
    cout << "Enter soda purchased: " << endl;
    
    cin >> purchased;
    
    return purchased;
}

int sodaSold ()
{
    int sold;
    
    cout << "Enter soda sold: " << endl;
    
    cin >> sold;
    
    return sold;
    
    
}

int getID()
{
    int id;
    
    cout << "Coca-Cola (ID number 1)\n"
    "Pepsi (ID number 2)\n"
    "Canada Dry (ID number 3)\n"
    "and Hires (ID number 4)\n";
    
    cin >> id;
    return id;
}