/*
 
 Homework 13
 7.5 Programming Page 413 Q1, A2
 Page 435 Q8, Q9, Q10
 
 1. Write a switch statement with a selector expression of type day (see Example 7.6) that displays a message indicating the corresponding
 day of the week followed by the message " is a weekday" or " is a weekend day".
 
 For example, if the selector expression value is Sunday, the message "Sunday is a weekend day" should be displayed.
 
 
 
 
 // Function prototypes
 void writeColor(color); color readColor();
 int main() {
 color eyeColor, hairColor;
 cout << "Reading eye color" << endl;
 eyeColor = readColor();
 cout << endl << "Reading hair color" << endl;
 hairColor = readColor();
 cout << endl << "Eye color is ";
 writeColor(eyeColor);
 cout << ", hair color is ";
 writeColor(hairColor);
 cout << endl;
 return 0; }
 // Insert functions readColor and writeColor here.
 ￼
 Reading eye color Enter first letter Try again!
 Enter first letter Reading hair color Enter first letter Eye color is blue,
 of color (R,G,B, or Y): e
 of color (R,G,B, or Y): b
 of color (R,G,B, or Y): Y hair color is yellow
 
 
 
 */

#include <iostream>

using namespace std;

enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

day readDay();

void choose(day);

int main()
{
    day chosenDay;
    
    cout << "Reading day: ";
    chosenDay = readDay();
    
    choose(chosenDay);
    
    system ("pause");
    return 0;
    
}

day readDay()
{
    
    // Local data ...
    
    string choice;
    
    // storage for data character
    // Continue reading until data character is valid.
    do
    {
        cout << "Enter the day (sunday,monday,tuesday,wednesday,thursday,friday, or saturday): ";
        
        cin >> choice;
        
        
        
        // Return color value if valid character read.
        if (choice == "sunday")
        {
            return sunday;
        }
        else if (choice == "monday")
        {
            return monday;
        }
        else if (choice == "tuesday")
        {
            return tuesday;
        }
        else if (choice == "wednesday")
        {
            return wednesday;
        }
        else if (choice == "thursday")
        {
            return thursday;
        }
        else if (choice == "friday")
        {
            return friday;
        }
        else if (choice == "saturday")
        {
            return saturday;
        }
        
        else
        {
            cout << "Try again!" << endl;
        }
        
    } while (true);
    
}


void choose(day a)
{
    switch (a)
    {
        case sunday:
            
            cout << "sunday is a weekend";
            
            break;
            
        case monday:
            
            cout << "monday is a weekday";
            
            break;
            
        case tuesday:
            
            cout << "tuesday is a weekday";
            
            break;
            
        case wednesday:
            
            cout << "wednsday is a weekday";
            
            break;
            
        case thursday:
            
            cout << "thursday is a weekday";
            
            break;
            
        case friday:
            
            cout << "Friday is a weekday";
            
            break;
            
        case saturday:
            
            cout << "Saturday is a weekend";
            
            break;
            
        default:
            cout << "ERROR";
            
    }
    
}











































































































































































