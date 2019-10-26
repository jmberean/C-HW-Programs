/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         11/14/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 12
 
 Page 382 Q9, Q10
 Page 401 7.3 Programming 3
 Page 405 7.4 Programming 2
 Page 432 Programming Projects: Q1, Q2, Q4, Q6
 
 Page 382 Q10 -
 
 10. Write a function that reads a problem involving two common fractions such as 2/4 + 5/6.
 After reading the common fractions problem, call a function to perform the indicated operation
 (call addFrac for +, call multiplyFrac for *, and so on).
 Pass the numerator and denominator of both fractions to the function that performs the operation;
 the function should return the numerator and denominator of the result through its output parameters.
 Then display the result as a common fraction.
 (Hint: Use functions readFracProblem and getFrac; see Listings 6.3 and 6.4.)
 
 */

#include <iostream>

using namespace std;

void getFrac(int&, int&);
void readFracProblem(int&,int& ,int&, int&, char&);
void computeAdd(float, float, float, float, float&, float&);
void computeSub(float, float, float, float, float&, float&);
void computeMult(float, float, float, float, float&, float&);
void computeDiv(float, float, float, float, float&, float&);



int main()
{
    int num1;
    int den1;
    int num2;
    int den2;
    char symbol;
    float num3, den3;
    
    readFracProblem(num1, den1, num2, den2,symbol);
    
    if (symbol == '+')
    {
        computeAdd(num1,den1,num2,den2, num3,den3);
        
        cout << num3 << endl;
        cout << "---" << endl;
        cout << den3 << endl;
    }
    else if (symbol == '-')
    {
        computeSub(num1,den1,num2,den2, num3,den3);
        
        cout << num3 << endl;
        cout << "---" << endl;
        cout << den3 << endl;
    }
    else if (symbol == '*')
    {
        computeMult(num1,den1,num2,den2, num3,den3);
        
        cout << num3 << endl;
        cout << "---" << endl;
        cout << den3 << endl;
    }
    else if (symbol == '/')
    {
        computeDiv(num1,den1,num2,den2, num3,den3);
        
        cout << num3 << endl;
        cout << "---" << endl;
        cout << den3 << endl;
    }
    
    system ("pause");
    return 0;
}

void getFrac(int& num, int& den)
{
    char slash;
    
    cout << "Enter a fraction as 2 integers seperated by a slash: ";
    cin >> num >> slash >> den;
}
void readFracProblem(int& num1,int& den1,int& num2, int& den2, char& symbol)
{
    getFrac(num1, den1);
    cin >> symbol;
    getFrac(num2,den2);
}

void computeAdd(float num1, float den1, float num2, float den2, float& num3, float& den3)
{
    int result1 = num1 * den2;
    int result2 = den1 * num2;
    int result3 = den1*den2;
    
    num3 = result1+ result2;
    
    den3 = result3;
    
}
void computeSub(float num1, float den1, float num2, float den2, float& num3, float& den3)
{
    int result1 = num1 * den2;
    int result2 = den1 * num2;
    int result3 = den1*den2;
    
    num3 = result1 - result2;
    
    den3 = result3;
}
void computeMult(float num1, float den1, float num2, float den2, float& num3, float& den3)
{
    num3 = num1 * num2;
    
    den3 = den1 * den2;
}
void computeDiv(float num1, float den1, float num2, float den2, float& num3, float& den3)
{
    num3 = num1 / num2;
    
    den3 = den1 / den2;
}


