



/*
 
 9. A baseball player’s batting average is calculated as the number of hits divided by the official number of at-bats.
 In calculating official at-bats, walks, sacrifices, and occasions when hit by the pitch are not counted.
 Write a program that takes data containing player numbers and batting records.
 Trips to the plate are coded in the batting record as follows: H—hit, O—out, W—walk, S—sacrifice, P—hit by pitch.
 The program should output for each player the input data followed by the batting average.
 
 Sample data:
 
 12 HOOOWSHHOOHPWWHO
 4 OSOHHHWWOHOHOOO
 7 WPOHOOHWOHHOWOO
 
 Corresponding output:
 
 Player 12's record: HOOOWSHHOOHPWWHO
 Player 12's batting average: 0.455
 
 Player 4's record: OSOHHHWWOHOHOOO
 Player 4's batting average: 0.417
 
 Player 7's record: WPOHOOHWOHHOWOO
 Player 7's batting average: 0.364
 
 */


#include <iostream>

using namespace std;

void inputData(float&,float&,string&);


int main()
{
    float player;
    float number;
    string stringChoice;
    
    inputData(player, number, stringChoice);
    
    
    return 0;
}

void inputData(float& player,float& number, string& stringChoice)
{
    float batAv;
    int divisibleControl;
    unsigned int control;
    while(true)
    {
        cout << "\nEnter the players number: ";
        cout << "Enter H—hit, O—out, W—walk, S—sacrifice, P—hit by pitch: ";
        cout << "Type 0 when done.";
        cin >> player;
        
        if(player == 0)
            break;
        
        cin >> stringChoice;
        
        int hits = 0;
        
        for (control = 0;
             control < stringChoice.length();
             control++)
        {
            if(stringChoice.at(control) == 'H')
            {
                hits ++;
                
                divisibleControl ++;
            }
            
            else if ( stringChoice.at(control) == 'O')
            {
                divisibleControl ++;
            }
            
        }
        
        batAv = (float)hits/divisibleControl;        //stringChoice.length();
        
        cout << "\n\nPlayer " << player << "'s record " << stringChoice;
        
        cout << "\n avereage " <<batAv;
    }
    
}



















