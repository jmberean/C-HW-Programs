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

 Page 376 Q8 -
 
 8. Develop a collection of functions to solve simple conduction problems using various forms of the formula
 
 H = kA(T2 - T1) 
        --------
            X
 
 where H is the rate of heat transfer in watts, 
 k is the coefficient of thermal conductivity for the particular substance,
 A is the cross-sectional area in m2 (square meters), 
 T2 and T1 are the Kelvin temperatures on the two sides of the conductor,
 X is the thickness of the conductor in meters.
 
 ￼￼￼Define a function for each variable in the formula. 
 
 For example, function 
 
 calcH would compute the rate of heat transfer,
 calcK would figure the coefficient of thermal conductivity, 
 calcA would find the crosssectional area, and so on.
 calcT2 would find temperature on side one.
 calcT1 would find the temperature on the other side.
 calcX would compute the thickness of conducter.
  
 Develop a driver function that interacts with the user in the following way:
 
 Respond to the prompts with the data known. For the unknown quantity, enter -999
 
 Rate of heat transfer (watts) : 755.0
 
 Coefficient of thermal conductivity (W/m-K) : 0.8 
 
 Cross-sectional area of conductor (m^2) : 0.12 
 
 Temperature on side one (K) : 298 // t2
 
 Temperature on side two (K) : -999 // t1
 
 Thickness of conductor (m) : 0.003
 
 H = kA(T2 - T1)
        -------
           X
 
  
  
 Temperature on the other side is 274 K.
 
 ￼H = 755.0 W       T2 = 298 K
 k = 0.800 W/m-K   T1 = 274 K
 A = 0.120 m^2     X = 0.0003 m
*/

#include <iostream>

using namespace std;

void calc(float&,float&, float&, float&, float&, float&);
float calcH(float, float, float, float, float);
float calcK(float, float, float, float, float);
float calcA (float, float, float, float, float);// would find the crosssectional area, and so on.
float calcT2 (float, float, float, float, float);// would find temperature on side one.
float calcT1(float, float , float, float , float); // would find the temperature on the other side.
float calcX (float, float, float , float, float); // would compute the thickness of conducter.


int main()
{
    const int SETINEL = -999;
    
    float rateOfHeatTransfer; // H
    float coefficient;        // k
    float crosssectional;     // A
    float t1;                 // other side
    float t2;                 // side one
    float distance;           // X
    
    calc(rateOfHeatTransfer, coefficient, crosssectional,t1, t2,distance);
    
    if (rateOfHeatTransfer == SETINEL)
    {
        cout << "Rate of heat transfer (watts) = " << calcH(coefficient, crosssectional,t1, t2,distance);
    }
    else if (coefficient == SETINEL)
    {
        cout << "Coefficient of thermal conductivity (W/m-K) = " << calcK(rateOfHeatTransfer, crosssectional, t1, t2, distance);
    }
    else if (crosssectional == SETINEL)
    {
        cout  << "Cross-sectional area of conductor (m^2) :" << calcA(rateOfHeatTransfer, coefficient, t1, t2, distance);
        
    }
    else if (t1 == SETINEL)
    {
        cout << "Temperature on other side (K) : " << calcT1(rateOfHeatTransfer, coefficient, crosssectional, t2, distance);
    }
    else if (t2 == SETINEL)
    {
        cout << "Temperature on side one(K) : " << calcT2(rateOfHeatTransfer, coefficient, crosssectional, t1, distance);
        
    }
    else if (distance == SETINEL)
    {
        cout << "Thickness of conductor (m) : " << calcX(rateOfHeatTransfer, coefficient, crosssectional, t1, t2);
    }
    system ("pause");
    
    return 0;
}

void calc(float& rateOfHeatTransfer, float& coefficient, float& crosssectional, float& t1, float& t2, float& distance)
{
    cout << "Respond to the prompts with the data known. For the unknown quantity, enter -999. \n";
    
    cout << "Enter Rate of heat transfer (watts) : "; // 755.0
    cin >> rateOfHeatTransfer;
    
    cout << "Enter Coefficient of thermal conductivity (W/m-K) : "; // 0.8
    cin >> coefficient;
    
    cout << "Enter Cross-sectional area of conductor (m^2) : "; // 0.12
    cin >> crosssectional;
    
    cout << "Enter Temperature on one side (K) : "; // 298
    cin >> t2;
    
    cout << "Enter Temperature on other side (K) : "; // -999
    cin >> t1;
    
    cout << "Enter Thickness of conductor (m) : "; // 0.003
    cin >> distance;
}

float calcH(float coefficient, float crosssectional, float t2, float t1,float distance)
{
    return (coefficient * crosssectional*(t2-t1)) / distance; // ^^^
}
float calcK(float rateOfHeatTransfer, float crosssectional, float t2, float t1, float distance)
{
    return (distance * rateOfHeatTransfer)/(crosssectional*(t2-t1)); // ^^^
}
float calcA (float rateOfHeatTransfer, float coefficient, float t2, float t1, float distance)// would find the crosssectional area, and so on.
{
    return (rateOfHeatTransfer * distance) / (coefficient * (t2-t1); // ^^^
}
float calcT2 (float rateOfHeatTransfer, float coefficient, float crosssectional, float t1, float distance)// would find temperature on side one.
{
    return (distance * rateOfHeatTransfer)/(coefficient * crosssectional) + t1; // ^^^
}
                                 
                                              
float calcT1(float rateOfHeatTransfer, float coefficient, float crosssectional, float t2, float distance) // would find the temperature on the other side.
{
    return (((distance * rateOfHeatTransfer)/(coefficient * crosssectional) - t2)/-1);
    //((coefficient * crosssectional * t2) - (distance * rateOfHeatTransfer))/ coefficient * rateOfHeatTransfer;
}
      
                                              
float calcX (float rateOfHeatTransfer, float coefficient, float crosssectional, float t1, float t2) // would compute the thickness of conducter.
{
    return (coefficient * crosssectional * (t2-t1))/rateOfHeatTransfer;
}








