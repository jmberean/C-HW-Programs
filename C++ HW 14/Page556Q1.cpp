/*
 1. Write a program to read n data items into two arrays, x and y, of size 20.
 Store the products of corresponding pairs of elements of x and y in a third array, z, also of size 20.
 Print a three-column table that displays the arrays x, y, and z. Then compute and print the square root of the sum of the items in z.
 Make up your own data, with n less than 20.
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int arrayX[20];
    int arrayY[20];
    
    
    int arrayZ[20];
    
    int control;
    
    for (control = 0;
         control < 20;
         control++)
        
    {
        cout << "Enter array one number: ";
        cin >> arrayX[control];
        
        cout << "Enter array two number: ";
        cin >> arrayY[control];
        
        arrayZ[control] = arrayX[control] * arrayY[control];
        
        cout << "Result: " << arrayZ[control] << endl;
    }
    
    
    int control3;
    
    cout << setw(5) << "ArrayX" << setw(10) << "ArrayY" << setw(15) << "ArrayZ" << endl;
    
    for(control3 = 0;
        control3 < 20;
        control3 ++)
    {
        cout << setw(5) << arrayX[control3] << setw(10)  << arrayY[control3] << setw(15) << arrayZ[control3] << endl;
    }
    
    
    int control2;
    
    int sum;
    
    for (control2 = 0;
         control2 < 20;
         control2 ++)
    {
        sum += arrayZ[control2];
    }
    
    int show = sum;
    
    sum = pow(sum, 0.5);
    
    cout << show <<" squared = " << sum << endl;
    
    return 0;
}
