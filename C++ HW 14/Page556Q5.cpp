/*
 5. The results of a survey of the households in your township are available for public scrutiny.
 
 Each record contains data for one household,
 including a four-digit integer identification number,
 the annual income for the household,
 and the number of household members.
 
 Write a program to read the survey results into three arrays and perform the following analyses.
 
 a. Count the number of households included in the survey and print a three-column table displaying the data. (Assume that no more than 25 households were surveyed.)
 
 b. Calculate the average household income, and list the identification number and income of each household that exceeds the average.
 
 c. Determine the percentage of households that have incomes below the poverty level. Compute the poverty level income using the formula
 
 p = $7000.00 + $850.00 × (m - 2)
 
 where m is the number of members of each household. This formula shows that the poverty level depends on the number of family members, m, and that the poverty-level income increases as m gets larger. Test your program on the following data.
 
 Identification Number               Annual Income                     Household Members
 
 1041                                    12,180                              4
 1062                                    13,240                              3
 1327                                    19,800                              2
 1483                                    35,000                              7
 1900                                    17,000                              2
 2112                                    28,500                              6
 2345                                    15,623                              2
 3210                                    3,200                               6
 3600                                    6,500                               5
 3601                                    11,970                              2
 4724                                    8,900                               3
 6217                                    10,000                              2
 9280                                    6,200                               1
 
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int control;
    
    int ID[13] = {};
    int annualInc[13] = {};
    int houseHoldMembers[13] = {};
    
    for (control = 0;
         control < 13;
         control ++)
    {
        cout << "Enter four digit ID number: ";
        cin >> ID[control];
        
        cout << "Enter annual income: ";
        cin >> annualInc[control];
        
        cout << "Enter household members: ";
        cin >> houseHoldMembers[control];
    }
    
    
    
    int control3;
    int sum;
    int average;
    
    for (control3 = 0;
         control3 < 13;
         control3 ++)
    {
        sum += annualInc[control3];
    }
    
    average = sum/13;
    
    cout << "\n\nHousehold income average: $" << average << endl << endl;
    
    
    cout << "\n" << setw(5) << " ID number: " << setw(10) << " Anuual income: " << setw(15) << " Household Members: " << endl << endl;
    
    int control4;
    
    for (control4 = 0;
         control4 < 13;
         control4 ++)
    {
        if (annualInc[control4] < average)
        {
            cout << setw(5) << ID[control4] << setw(10) << annualInc[control4] << setw(20) << houseHoldMembers[control] << "             - below poverty level." << endl;
        }
        else if (annualInc[control4] > average)
        {
            cout << setw(5) << ID[control4]<< setw(10) << annualInc[control4] << setw(20) << houseHoldMembers[control]  << "             - above poverty level." << endl;
        }
    }
    
    
    int count;
    int count1;
    float p;
    
    for (count = 0;
         count < 13;
         count ++)
    {
        
        p = 7000.00 + 850.00 * (houseHoldMembers[count] - 2);
        
        if (annualInc[count] < p)
        {
            count1 ++;
        }
        
    }
    
    float povertyLevel;
    
    povertyLevel = (count1 / 13.0) *100.0;
    
    cout << "\n\n" << povertyLevel << " percent of households have incomes below the povery level." << endl  << endl;
    
    return 0;
}




