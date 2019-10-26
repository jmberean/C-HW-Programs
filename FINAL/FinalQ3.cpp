
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

float revenue(float);
void predicts(float);

int main()
{
    float prediction;
    float answer;
    int yearAgain = 1984;
    float control2 = 1000000000000;
    
    cout << "Enter predicted number of dollars to calculate year it will be attianed: ";
    cin >> prediction;
    
    predicts(prediction);
    
    
    cout << setw(5) << "Year" << setw(15) << "Money made" << endl;
    
    for(int control = 0;
        answer < control2;
        control++ )
    {
        
        answer = revenue(control);
        
        if(answer <= control2)
        {
            
            cout << setw(5) << yearAgain << setw(15) << answer << endl;
            
        }
        else if(answer > control2)
        {
            cout << setw(5) << yearAgain << setw(15) << answer << endl;
        }
        
        yearAgain ++;
        
    }
    
    
    
    
    
    return 0;
}

float revenue(float time)
{
    float R;
    
    R = 203.265 * (pow(1.071, time));
    
    return R;
}

void predicts(float prediction)
{
    int year = 1984;
    
    float control;
    
    for (control = 0;
         revenue(control) < prediction;
         control++)
    {
        revenue(control);
        
        year++;
    }
    
    cout << "Year to attain $" << prediction << ". Will be: " << year << endl;
    
}

