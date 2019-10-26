#include <iostream>

using namespace std;

void answer(int&);

int main()
{
    int one = 154368;
    int two = 621594;
    int three = 123456;
    
    int number;
    
    int sum = 0;
    int digit;
    int i = 0;
    
    answer(one);
    answer(two);
    answer(three);
    
    system ("pause");
    return 0;
}
void answer(int& num)
{
    int sum = 0;
    int digit;
    int i = 0;
    
    int numberYAY = num;
    
    while ( i < 6)
    {
        digit = num%10;
        
        num = num/10;
        
        sum += digit;
        
        i++;
    }
    
    if (sum % 9 == 0)
    {
        cout << "\n" << numberYAY << " is divisisible by 9";
    }
    else
        cout << "\n" << numberYAY << " is not divisible";
}

