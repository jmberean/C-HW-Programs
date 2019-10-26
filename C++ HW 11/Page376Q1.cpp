/*
 
 Programmer:   John m Berean
 Instructer:   Professor Ye
 Date:         11/14/2015
 Class:        CSP*141*001 (9165) Intro to Programming in C++
 
 Homework 11
 Programming Projects:
 Page 344 Q4
 Page 351 Q3
 Page 376 Q1, Q2, Q5, Q8
 
 Page 376 Q1 -
 
 1. A hospital supply company wants to market a program to assist with the calculation of intravenous rates. Design and implement a program that interacts with the user as follows:
 
 
 INTRAVENOUS RATE ASSISTANT
 
 Enter the number of the problem you wish to solve.
 
 GIVEN A MEDICAL ORDER IN           CALCULATE RATE IN
 
 (1) ml/hr & tubing drop factor             drops / min
 (2) 1 L for n hr                           ml / hr
 (3) mg/kg/hr & concentration in mg/ml      ml / hr
 (4) units/hr & concentration in units/ml   ml / hr
 (5) QUIT
 
 Problem=> 1
 Enter rate in ml/hr=> 150
 Enter tubingâ€™s drop factor(drops/ml)=> 15
 The drop rate per minute is 38.
 
 Enter the number of the problem you wish to solve.
 
 GIVEN A MEDICAL ORDER IN            CALCULATE RATE IN
 
 (1) ml/hr & tubing drop factor             drops / min
 (2) 1 L for n hr                           ml / hr
 (3) mg/kg/hr & concentration in mg/ml      ml / hr
 (4) units/hr & concentration in units/ml   ml / hr
 (5) QUIT
 
 Problem=> 2
 Enter number of hours=> 8
 The rate in milliliters per hour is 125.
 
 Enter the number of the problem you wish to solve.
 
 GIVEN A MEDICAL ORDER IN            CALCULATE RATE IN
 
 (1) ml/hr & tubing drop factor             drops / min
 (2) 1 L for n hr                           ml / hr
 (3) mg/kg/hr & concentration in mg/ml      ml / hr
 (4) units/hr & concentration in units/ml   ml / hr
 (5) QUIT
 
 Problem=> 3
 Enter rate in mg/kg/hr=> 0.6
 Enter patient weight in kg=> 70
 Enter concentration in mg/ml=> 1
 The rate in milliliters per hour is 42.
 
 Enter the number of the problem you wish to solve.
 
 GIVEN A MEDICAL ORDER IN            CALCULATE RATE IN
 
 (1) ml/hr & tubing drop factor             drops / min
 (2) 1 L for n hr                           ml / hr
 (3) mg/kg/hr & concentration in mg/ml      ml / hr
 (4) units/hr & concentration in units/ml   ml / hr
 (5) QUIT
 
 Problem=> 4
 Enter rate in units/hr=> 1000
 Enter concentration in units/ml=> 25
 The rate in milliliters per hour is 40.
 
 Enter the number of the problem you wish to solve.
 
 GIVEN A MEDICAL ORDER IN               CALCULATE RATE IN
 
 (1) ml/hr & tubing drop factor             drops / min
 (2) 1 L for n hr                           ml / hr
 (3) mg/kg/hr & concentration in mg/ml      ml / hr
 (4) units/hr & concentration in units/ml   ml / hr
 (5) QUIT
 
 Problem=> 5
 
 Implement the following functions:
 
 
 
 getProblem â€” Displays the user menu, then inputs and returns as the function value the problem number selected.
 
 
 // VOID FUNCTIONS (OUPUT PARAMETERS)
 
 getRateDropFactor â€” Prompts the user to enter the data required for problem 1, and sends this data back to the calling module via output parameters.
 
 getKgRateConc â€” Prompts the user to enter the data required for problem 3, and sends this data back to the calling module via out- put parameters.
 
 getUnitsConc â€” Prompts the user to enter the data required for problem 4, and sends this data back to the calling module via output parameters.
 
 
 
 
 // RETURN FUNCTIONS
 
 
 figMlHr â€” Takes as an input parameter the number of hours over which one liter is to be delivered and returns ml/hr (rounded) as function value.
 
 figDropsMin â€” Takes rate and drop factor as input parameters and returns drops/min (rounded to the nearest whole drop) as function value.
 
 byWeight â€” Takes as input parameters rate in mg/kg/hr, patient weight in kg, and concentration of drug in mg/ml and returns ml/hr (rounded) as function value.
 
 byUnits â€” Takes as input parameters rate in units/hr and concentration in units/ml, and returns ml/hr(rounded) as function value.
 
 
 
 
 (Hint: Use a sentinel-controlled loop. Call getProblem once before the loop to initialize the problem number and once again at the end of the loop body to update it.)
 
 */

#include <iostream>

using namespace std;

int const SENTINEL = 5;

int getProblem();                                // user enters number choice

void getRateDropFactor(float&,float&);           // inputs problem 1
float figDropsMin(float, float);                 // returns problem 1

float figMlHr(int);                              // returns problem 2

void getKgRateConc(float&, float&, float&);      // inputs problem 3
float byWeight(float,float,float);               // returns problem 3

void getUnitsConc(float&, float&);               // inputs problem 4
float byUnits(float,float);                      // returns problem 4

int main()
{
    int const SENTINEL = 5;
    
    int choice = getProblem();
    
    while (choice != SENTINEL)
    {
        if (choice == 1)
        {
            /*
             Problem=> 1
             Enter rate in ml/hr=> 150
             Enter tubingâ€™s drop factor(drops/ml)=> 15
             The drop rate per minute is 38.
             */
            
            float rateMlHr;
            float dropFactor;
            
            getRateDropFactor(rateMlHr, dropFactor);
            
            cout << "The drop rate per minute is " << figDropsMin(rateMlHr, dropFactor);
            
        }
        
        /*
         Problem=> 2
         Enter number of hours=> 8
         The rate in milliliters per hour is 125.
         */
        
        else if (choice == 2)
        {
            int hours;
            
            cout << "Enter number of hours: ";
            cin >> hours;
            
            cout << "The rate in milliliters per hour is " << figMlHr(hours);
        }
        
        /*
         Problem=> 3
         Enter rate in mg/kg/hr=> 0.6
         Enter patient weight in kg=> 70
         Enter concentration in mg/ml=> 1
         The rate in milliliters per hour is 42.
         */
        
        else if (choice == 3)
        {
            
            float mgKgHr;
            float weightKg;
            float concentrationMgMl;
            float result3;
            
            getKgRateConc(mgKgHr, weightKg, concentrationMgMl);
            
            cout << "The rate in milliliters per hour is " <<  byWeight(mgKgHr, weightKg, concentrationMgMl);
        }
        
        /*
         Problem=> 4
         Enter rate in units/hr=> 1000
         Enter concentration in units/ml=> 25
         The rate in milliliters per hour is 40.
         */
        
        else if (choice == 4)
        {
            
            float rateUnitsHr;
            float concentrationUnitsMl;
            
            getUnitsConc(rateUnitsHr, concentrationUnitsMl);
            
            cout << " The rate in milliliters per hour is: " <<  byUnits(rateUnitsHr, concentrationUnitsMl);
            
        }
        
        choice = getProblem();
        
    }
    
    system ("pause");
    return 0;
}

// getProblem â€” Displays the user menu, then inputs and returns as the function value the problem number selected.

int getProblem()
{
    int programNum;
    
    cout << "\n\nThis program assist with the calculation of intravenous rates. \n"
    
    "INTRAVENOUS RATE ASSISTANT \n"
    
    "Enter the number of problem you wish to solve: \n"
    
    "GIVEN A MEDICAL ORDER IN                   CALCULATE RATE IN \n"
    
    "(1) for ml/hr & tubing drop factor             drops / min \n"
    "(2) for 1 L for n hr                           ml / hr \n"
    "(3) for mg/kg/hr & concentration in mg/ml      ml / hr \n"
    "(4) for units/hr & concentration in units/ml   ml / hr \n"
    "(5) to quit the program. \n"
    
    "choice: ";
    
    cin >> programNum;
    
    return programNum;
}

// VOID FUNCTIONS

// getRateDropFactor â€” Prompts the user to enter the data required for problem 1, and sends this data back to the calling module via output parameters.

/*
 Problem=> 1
 Enter rate in ml/hr=> 150
 Enter tubingâ€™s drop factor(drops/ml)=> 15
 The drop rate per minute is 38.
 */

void getRateDropFactor(float& rateMlHr, float& dropFactor)
{
    cout << "Enter rate in ml/hr: ";
    cin >> rateMlHr;
    
    cout << "Enter tubing's drop factor(drops/ml): ";
    cin >> dropFactor;
}

// figDropsMin â€” Takes rate and drop factor as input parameters and returns drops/min (rounded to the nearest whole drop) as function value.

float figDropsMin(float rate, float dropFactor)
{
    float result;
    
    result = rate * dropFactor / 60;
    
    return (int)(result + 0.5);
}

/*
 Problem=> 2
 Enter number of hours=> 8
 The rate in milliliters per hour is 125.
 */

// figMlHr â€” Takes as an input parameter the number of hours over which one liter is to be delivered and returns ml/hr (rounded) as function value.

float figMlHr(int hr)
{
    return (1000 / hr);
}


// getKgRateConc â€” Prompts the user to enter the data required for problem 3, and sends this data back to the calling module via out-put parameters.
/*
 
 Problem=> 3
 Enter rate in mg/kg/hr=> 0.6
 Enter patient weight in kg=> 70
 Enter concentration in mg/ml=> 1
 The rate in milliliters per hour is 42.
 
 */

void getKgRateConc(float& mgKgHr, float& weightKg, float& concentrationMgMl)
{
    
    cout << "Enter rate in mg/kg/hr: ";
    cin >> mgKgHr;
    cout << "Enter patient weight in kg: ";
    cin >> weightKg;
    cout << "Enter concentration in mg/ml";
    cin >> concentrationMgMl;
}

// byWeight â€” Takes as input parameters rate in mg/kg/hr, patient weight in kg, and concentration of drug in mg/ml and returns ml/hr (rounded) as function value.

float byWeight(float rate, float patientWeight, float conc)
{
    float result = (rate * (1.0 / conc) * patientWeight);
    
    return (int)(result + 0.5);
}

// getUnitsConc â€” Prompts the user to enter the data required for problem 4, and sends this data back to the calling module via output parameters.//
/*
 Problem=> 4
 Enter rate in units/hr=> 1000
 Enter concentration in units/ml=> 25
 The rate in milliliters per hour is 40.
 */

void getUnitsConc(float& rate, float& conc)
{
    
    cout << "Enter rate in units/hr: " << endl;
    cin >> rate;
    cout << "Enter concentration in units/ml: " << endl;
    cin >> conc;
    
}


// byUnits â€” Takes as input parameters rate in units/hr and concentration in units/ml, and returns ml/hr(rounded) as function value.

float byUnits(float rate, float conc)
{
    float ans = (rate / conc);
    
    return (int)(ans + 0.5);
}



