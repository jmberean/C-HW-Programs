/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/23/2015
 
 MID-TERM
 
 Q3
 
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float weekDayM;
    float nightM;
    float weekEndM;
    float taxes;
    float bill;
    float averageMCost;
    float afterTaxes;
    float totalM;
    
    cout << "Enter the number of weekday minutes: ";
    
    cin >> weekDayM;
    
    cout << "\nEnter the night minutes: ";
    
    cin >> nightM;
    
    cout << "\nEnter the number of weekend minutes: ";
    
    cin >> weekEndM;
    
    totalM = weekDayM + nightM + weekEndM;
    
    if (weekDayM <= 600)
    {
        
        bill = 39.99;
    }
    else if (weekDayM > 600)
    {
        
        bill=((weekDayM-600)*0.40)+39.99;
    }
    
    afterTaxes = ((bill*0.0525)+bill);
    
    taxes = (afterTaxes-(bill));
    
    averageMCost = ((bill)/totalM);
    
    cout << "\n\n"<< "Total weekday minnutes = " << weekDayM;
    cout << "\n\n" << "Total night minnutes = " << nightM;
    cout << "\n\n" << "Total weekend minnutes = " << weekEndM;
    cout << "\n\n" << "Bill before taxes = " << bill;
    cout << "\n\n" << "Average cost per minute = " << averageMCost;
    cout << "\n\n" << "Taxes = " << taxes;
    cout << "\n\n" << "Monthly bill is = " << afterTaxes;
    
    system ("pause");
    return 0;
    
}