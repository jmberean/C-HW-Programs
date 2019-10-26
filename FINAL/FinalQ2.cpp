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


#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void callDivisor(int&, int&);

int main()

{
    int control1;
    int sum;
    
    for(control1 = 0;
        control1 <= 100;
        control1 ++)
    {
        
        cout << "\n" << control1 << "   Factors: ";
        callDivisor(control1,sum);
        
        if (sum > control1)
        {
            cout << setw(25) << control1 << "   Numer is abundant";
        }
        else if (sum == control1)
        {
            cout << setw(25) << control1 << "   number is perfect";
        }
        else if (sum < control1)
        {
            cout << setw(25) << control1 << "   number is defieincent";
        }
        
    }
    
    
    return 0;
}

void callDivisor(int& control1, int& sum)
{
    int control;
    int countB;
    sum = 0;
    control = 0;
    
    for(countB = 1;
        countB < control1;
        countB++)
    {
        
        if(control1 % countB == 0)
        {
            control++;
            
            cout << countB << " ";
            
            sum += control;
        }
    }
    
    
    
}

