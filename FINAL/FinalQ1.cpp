#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string apples[5] = {"mild","medium","sweet","hot","zesty"};
    int applesSold[5] = {};
    
    int control;
    
    for(control = 0;
        control < 5;
        control++)
    {
        cout << "Enter the number of jars sold for " << apples[control] << " :";
        cin >> applesSold[control];
    }
    int control2;
    int sum = 0;
    int control3;
    
    
    for (control2 = 0;
         control2 < 5;
         control2 ++)
    {
        cout << "\nTotal jars sold for " << apples[control2] << " are: " << applesSold[control2] << endl;
        
        sum += applesSold[control2];
    }
    
    cout << "\nTotal jars solds: " << sum << endl << endl;
    
    
    string big;
    string small;
    
    
    for (control3 = 0;
         control3 < 5;
         control3 ++)
    {
        
        if ((applesSold[0] > applesSold[1]) && (applesSold[0] > applesSold[2])&& (applesSold[0] > applesSold[3])&& (applesSold[0] > applesSold[4]))
        {
            big = apples[0];
        }
        else if((applesSold[1] > applesSold[0]) && (applesSold[1] > applesSold[2])&& (applesSold[1] > applesSold[3])&& (applesSold[1] > applesSold[4]))
        {
            big = apples[1];
        }
        
        else if((applesSold[2] > applesSold[0]) && (applesSold[2] > applesSold[1])&& (applesSold[2] > applesSold[3])&& (applesSold[2] > applesSold[4]))
        {
            big = apples[2];
        }
        
        else if((applesSold[3] > applesSold[0]) && (applesSold[3] > applesSold[1])&& (applesSold[3] > applesSold[2])&& (applesSold[3] > applesSold[4]))
        {
            big = apples[3];
        }
        
        else if((applesSold[4] > applesSold[0]) && (applesSold[4] > applesSold[1])&& (applesSold[4] > applesSold[2])&& (applesSold[4] > applesSold[3]))
        {
            big = apples[4];
        }
        
        
        
        
        
        
        if ((applesSold[0] < applesSold[1]) && (applesSold[0] < applesSold[2])&& (applesSold[0] < applesSold[3])&& (applesSold[0] < applesSold[4]))
        {
            small = apples[0];
        }
        else if((applesSold[1] < applesSold[0]) && (applesSold[1] < applesSold[2])&& (applesSold[1] < applesSold[3])&& (applesSold[1] < applesSold[4]))
        {
            small = apples[1];
        }
        
        else if((applesSold[2] < applesSold[0]) && (applesSold[2] < applesSold[1])&& (applesSold[2] < applesSold[3])&& (applesSold[2] < applesSold[4]))
        {
            small = apples[2];
        }
        
        else if((applesSold[3] < applesSold[0]) && (applesSold[3] < applesSold[1])&& (applesSold[3] < applesSold[2])&& (applesSold[3] < applesSold[4]))
        {
            small = apples[3];
        }
        
        else if((applesSold[4] < applesSold[0]) && (applesSold[4] < applesSold[1])&& (applesSold[4] < applesSold[2])&& (applesSold[4] < applesSold[3]))
        {
            small = apples[4];
        }
        
    }
    
    cout << "\nSalsa sold the most: " << big;
    cout << "\nSalsa sold the least: " << small;
    
    
    
    return 0;
}



        
        
        
        
        
        
        