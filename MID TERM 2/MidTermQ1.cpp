#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void instruct(string&);

int main ()
{
    const string SENTINEL = "ZZZ";
    
    float rate;
    float hrs;
    float pay = 0;
    float netPay;
    float overTime;
    float pay2;
    float average;
    float totalGross = 0;
    float totalNet = 0;
    
    string name;
    instruct(name);
    
    while (name != SENTINEL)
    {
        
        cout << "\nEnter hourly wage rate: ";
        cin >> rate;
        
        cout << "\nEnter hours worked: ";
        cin >> hrs;
        
        if (hrs <= 40)
        {
            pay = rate * hrs;
        }
        else if (hrs > 40)
        {
            overTime = hrs - 40;
            pay2 = overTime * rate * 1.5;
            pay = rate * 40;
            pay = pay2 + pay;
        }
        
        netPay = pay - (pay * 0.03625);
        
        totalNet += netPay;
        totalGross += pay;
        
        cout << "\nName: " << name;
        
        cout << "\nGross pay: $" << pay;
        
        cout << "\nNetpay : $" << netPay;
        
        cout << "\n\n";
        
        cout << "Enter name: ";
        
        
        cin >> name;
    }
    
    cout << "Total Net pay: " << totalNet << endl;
    cout << "Total Gross pay: " << totalGross << endl;
    
    average = totalNet + totalGross / 2;
    
    cout << "Average: " << average;
    
    system ("pause");
    return 0;
}
void instruct(string& name)
{
    cout <<
    
    "Hello here we will processes weekly employee time cards for all employees.\n"
    "Each employee will input their ID number, hourly wage rate and the number of hours worked.\n"
    "Employees are paid time-and-a-half for all hours worked over 40\n"
    "A tax amount of 3.625 percent will be deducted.\n"
    "ZZZ for name will end the program.\n\n\n"
    "Enter name: ";
    
    cin >> name;
}

