/*
 
 10. The rate of decay of a radioactive isotope is given in terms of its half-life H,
 the time lapse required for the isotope to decay to one-half of its original mass.
 The isotope cobalt-60 (60Co) has a half-life of 5.272 years.
 Compute and print in table form the amount of this isotope that remains after each year for five years,
 given the initial presence of an amount in grams. The value of amount should be provided interactively.
 The amount of 60Co remaining can be computed by using the following formula:
 
 r = amount × C^(y/H)
 
 where amount is the initial amount in grams,
 C is expressed as e-0.693 (e = 2.71828),
 y is the number of years elapsed,
 and H is the half-life of the isotope in years.
 
 */

#include <iostream>
#include <cmath>

using namespace std;

void inputData(float&,float&,float&, float&);

int main()
{
    int y=1;
    
    float amount;
    float c;
    float h = 5.272;
    float result;
    int control = 0;
    
    cout << "Enter amount: ";
    cin >> amount;
    
    c = exp(-0.693);
    
    while(control < 5)
    {
        
        result = amount * pow(c,(y/h));
        
        y ++;
        
        cout << "answer " << result << endl;
        
        control ++;
        
        amount = result;
        
    }
    
    return 0;
}










