/*
 8. In shopping for a new house, you must consider several factors. In this problem the
 
 initial cost of the house,
 estimated annual fuel costs,
 and annual tax rate are available.
 
 Write a program that will determine the total cost after a five-year period for each set of house data below.
 
 
 
 Initial House Cost      Annual Fuel Cost            Tax Rate
 $175,000                    $2500                   0.025
 $200,000                    $2800                   0.025
 $210,000                    $2050                   0.020
 
 
 You should be able to inspect your program output to determine the “best buy.”
 
 To calculate the house cost, add the fuel cost for five years to the initial cost, then add the taxes for five years.
 
 Taxes for one year are computed by multiplying the tax rate by the initial cost.
 
 Write and call a function that displays instructions to the program user
 
 and another function that computes and returns the house cost given the initial cost, the annual fuel cost, and the tax rate. */


#include <iostream>

using namespace std;

void instructions();

float totalHouse(float,float,float);


int main()
{
    float initial1 = 175000;
    float annual1 = 2500;
    float taxRate1 = 0.025;
    
    float totalCost1;
    
    float initial2 = 200000;
    float annual2 = 2800;
    float taxRate2 = 0.025;
    
    float totalCost2;
    
    float initial3 = 210000;
    float annual3 = 2050;
    float taxRate3 = 0.025;
    
    float totalCost3;
    
    instructions();
    
    totalCost1 = totalHouse(initial1,annual1,taxRate1);
    
    totalCost2 = totalHouse(initial2, annual2, taxRate2);
    
    totalCost3 = totalHouse(initial3, annual3, taxRate3);
    
    cout << "\n\n" << "The total cost after a five-year period for house #1 is: " << totalCost1 << "\n\n";
    
    cout << "The total cost after a five-year period for house #2 is: " << totalCost2 << "\n\n";
    
    cout << "The total cost after a five-year period for house #3 is: " << totalCost3 << "\n\n";
}

void instructions()
{
    cout << "Hello! This program will determine the total cost after a five-year period for each set of house data below. \n\n"
    
    "    Initial House Cost      Annual Fuel Cost             Tax Rate      \n"
    "       $175,000                    $2500                   0.025       \n"
    "       $200,000                    $2800                   0.025       \n"
    "       $210,000                    $2050                   0.020       \n\n"
    
    "To calculate the total cost after a five-year period we calculate the house cost, \n"
    "add the fuel cost for five years to the initial cost, then add the taxes for five years.";
}

float totalHouse(float a, float b, float c)

{
    return (a+(b*5) + (a*c));
    
}
