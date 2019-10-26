#include <iostream>
#include <tgmath.h>
#include <cmath>

using namespace std;

void compute(float&, float&, float&);

int main()
{
    float realNum;
    float lgSQ;
    float N;
    float result;
    
    cout << "Enter positive real number: ";
    cin >> realNum;
    
    cout << "Enter initial guess: ";
    cin >> LG;
    
    lgSQ = sqrt(LG);
    
    compute(realNum, lgSQ, result);
    
    cout << "Next guess = " << result;
    
    return 0;
    
}
void compute(float& realNum, float& lgSQ, float& result)
{
    
    while (lgSQ - result > 0.005)
    {
        
        result = 0.5 * (lgSQ + realNum / lgSQ);
        
    }
    
    
}
