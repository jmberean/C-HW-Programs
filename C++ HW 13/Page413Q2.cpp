/*
 Homework 13
 7.5 Programming Page 413 Q1, A2
 Page 435 Q8, Q9, Q10
 2. Write function writeMonth for enumeration type month.
 */


// enter number gives month


#include <iostream>

using namespace std;

enum month {january, febuary, march, april, may, june, july, august, october, september, november, december};

month readMonth();

void choose(month);
int getIntRange(int , int);
int main()
{
    month chosenMonth;
    
    cout << "Reading month: ";
    chosenMonth = readMonth();
    
    cout << "Month is: ";
    choose(chosenMonth);
    
    system ("pause");
    return 0;
}

month readMonth()
{
    int monthValue;
    cout << "Enter number of month: ";
    
    monthValue = getIntRange(1,12);
    
    return (month(monthValue));
}

int getIntRange(int min, int max)
{
    
    int nextInt;
    
    do
    {
        cin >> nextInt;
        
    } while ((nextInt < min) || (nextInt > max));
    
    return nextInt;
}


void choose(month a)
{
    switch (a)
    {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "Febuary";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
            
        default:
            cout << "Try agian";
            break;
    }
    
}































