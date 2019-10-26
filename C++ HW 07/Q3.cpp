/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/17/2015
 
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 7
 
 Section 4.7 Page 238 Programming Q4,Q6
 Section 4.8 Page 244 Programming Q1, Q2, Q3,Q4
 Page 253 Q12, Q16
 
 3. Implement the solution to Self-Check Exercise 4 of Section 4.7 using a
 
 type char variable for the transaction type. Assume
 
 'd' or 'D' indicates a deposit and
 
 'w' or 'W' indicates a withdrawal. Use a switch statement.
 
 
 4. Write pseudo code for the following:
 
 if the transaction is a deposit,
 
 add the transaction amount to the balance and display the new balance;
 
 else, if the transaction is a withdrawal and the transaction amount is less than or equal to the balance,
 
 deduct the transaction amount from the balance and display the new balance;
 
 else, if the transaction is a withdrawal but the amount is greater than the balance,
 
 deduct a PENALTY amount (a constant) from the balance and display a “withdrawal exceeds balance” warning message;
 
 else display an “illegal transaction” message.
 
 */

#include <iostream>

using namespace std;

// const float MAX_NO_DUES = 100.00;       // max earnings before dues (dollars)

const float PENALTY = 100.0;

float deposit(float,float);

float withdrawal(float, float);

float tooMuch(float,float);

int main()
{
    float balance;
    char L;
    
    float transactionAmount;
    
    float dep;
    float with;
    float tooM;
    
    cout << "Please enter the transaction type: ";
    
    cin >> L;
    
    cout << "Please enter the transaction amount: ";
    
    cin >> transactionAmount;
    
    switch (L)
    {
        case 'd':
            
        case 'D':
            
        {
            dep = deposit(transactionAmount, balance);
            
            cout << "Your ballance: " << dep;
        }
            
            break;
            
        case 'w':
            
        case 'W':
            
            if (transactionAmount<=balance)
            {
                with = withdrawal(transactionAmount, balance);
                
                cout << "Your balance " << with;
            }
            
            else if (transactionAmount>balance)
            {
                tooM = tooMuch(balance, PENALTY);
                
                cout << "Your balance " << tooM << "withdrawal exceeds balance";
            }
            
            break;
            
            cout << "Illegal transaction";
            
            
            return 0;
    }
    float deposit(float a, float b)
    {
        return(a+b);
    }
    float withdrawal(float x, float y)
    {
        return (y-a);
    }
    float tooMuch(float q, float r)
    {
        return(q-r);
    }