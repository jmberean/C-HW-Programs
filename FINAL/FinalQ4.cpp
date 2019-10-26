#include <iostream>
#include <cmath>

void scan_data(char&, float&);

void do_next_op(char, float, float);

using namespace std;

int main()
{
    char symbol;
    float num;
    float accumulator = 0;
    
    do_next_op(symbol, num, accumulator);
    
    //system ("pause");
    return 0;
}
void scan_data(char& symbol, float& num)
{
    cout << "\n\nEnter the operation symbol: ";
    cin >> symbol;
    
    cout << "Enter number: ";
    cin >> num;
}
void do_next_op(char symbol, float num, float accumulator)
{
    scan_data(symbol, num);
    
    while (symbol != 'q')
    {
        
        if (symbol == '+')
        {
            accumulator += num;
        }
        else if (symbol == '-')
        {
            accumulator -= num;
        }
        else if (symbol == '*')
        {
            accumulator *= num;
        }
        else if (symbol == '/')
        {
            accumulator /= num;
        }
        else if(symbol == '^')
        {
            accumulator = pow(accumulator, num);
        }
        
        cout << "\n" << accumulator;
        
        scan_data(symbol,num);
        
    }
}





















