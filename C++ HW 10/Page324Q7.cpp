/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         11/11/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 10
 
 Section 5.6 Page 298 Programming Q3
 Section 5.7 Page 301 Programming Q3
 Section 5.8 Page 305 Programming Q3
 Page 324  Q5 Q7, Q8, Q9, Q12
 
 Page 324 Q7 -
 
 7. Suppose you own a soft drink distributorship that sells
 
 Coca-Cola (ID number 1),
 Pepsi (ID number 2),
 Canada Dry (ID number 3),
 and Hires (ID number 4) by the case.
 
 Write a program to do the following:
 ￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼￼
 a. Read in the case inventory for each brand at the start of the week.
 b. Process all weekly sales and purchase records for each brand.
 c. Display the final inventory.
 
 Each transaction will consist of two data items.
 The first will be the brand identification number (an integer).
 The second will be the amount purchased (a positive integer) or the amount sold (a negative integer).
 
 You can assume that you always have sufficient foresight to prevent depletion of your inventory for any brand.
 
 */

#include <iostream>
#include <iomanip>

float computeInventory(int);

using namespace std;

int main()
{
    int const SENTINEL = -1;
    int cocaCola;
    int pepsi;
    int canadaDry;
    int hires;
    int caseNum;
    
    cout << "This program allows the user to: \n"
    "a. Read in the case inventory for each brand at the start of the week. \n"
    "b. Process all weekly sales and purchase records for each brand. \n"
    "c. Display the final inventory.\n";
    
    cout << "Enter inventory for CocaCola: ";
    cin >> cocaCola;
    
    cout << "Enter inventory for Pepsi: ";
    cin >> pepsi;
    
    cout << "Enter inventory for CanadaDry: ";
    cin >> canadaDry;
    
    cout << "Enter inventory for Hires: ";
    cin >> hires;
    
    cout << "Enter case ID number: \n"
    "Coca-Cola (ID number 1), \n"
    "Pepsi (ID number 2), \n"
    "Canada Dry (ID number 3), \n"
    "and Hires (ID number 4) by the case. To quit program enter -1 for case number.\n";
    
    cin >> caseNum;
    
    while (caseNum != SENTINEL)
    {
        if (caseNum == 1)
        {
            cocaCola = computeInventory(cocaCola);
        }
        else if (caseNum == 2)
        {
            pepsi = computeInventory(pepsi);
        }
        else if (caseNum == 3)
        {
            canadaDry = computeInventory(canadaDry);
        }
        else if (caseNum == 4)
        {
            hires = computeInventory(hires);
        }
        
        cout << "\nEnter case ID number: ";
        
        cin >> caseNum;
    }
    cout << "\nCase inventory - CocaCola " << cocaCola << endl;
    cout << "Case inventory - Pepsi " << pepsi << endl;
    cout << "Case inventory - CanadaDry " << canadaDry << endl;
    cout << "Case inventory - Hires " << hires << endl;
    
    return 0;
}
float computeInventory(int x)
{
    int soldOrPurchased;
    int finalInventory;
    
    cout << "\nEnter the amount purchased or sold: ";
    
    cin >> soldOrPurchased;
    
    finalInventory = x + soldOrPurchased;
    
    return finalInventory;
}
















