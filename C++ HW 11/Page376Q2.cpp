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
 
 Page 376 Q2 -
 
 2. The table below summarizes three commonly used mathematical models of nonvertical straight lines.
 
 Mode Equation Given
 
 Two-point form m = y2 - y1 (x1, y1),
 x2 - x1 (x2, y2)
 
 ￼Point-slope form y - y1 = m(x - x1) m, (x1, y1)
 
 Slope-intercept form y = mx + b m, b
 
 Design and implement a program that permits the user to convert
 either two-point form or pointslope form into slope-intercept form.
 
 Your program should interact with the user as follows:
 
 
 
 
 Select the form that you would like to convert to slope-intercept form:
 
 1) Two-point form (you know two points on the line)
 
 2) Point-slope form (you know the line’s slope and one point) => 2
 
 Enter the slope=> 4.2
 Enter the x-y coordinates of the point separated by a space=> 1 1
 
 Point-slope form
 
 y – 1.00 = 4.20(x – 1.00)
 
 Slope-intercept form y = 4.20x – 3.20
 
 Do another conversion (Y or N) => Y
 
 Select the form that you would like to convert to slope- intercept form:
 1) Two-point form (you know two points on the line)
 2) Point-slope form (you know the line’s slope and one point)
 => 1
 Enter the x-y coordinates of the first point separated by a space=> 4 3
 
 Enter the x-y coordinates of the second point separated by a
 space=> -2 1
 
 Two-point form
 m = (1.00 - 3.00)
 -------------
 (-2.00 - 4.00)
 
 Slope-intercept form
 
 y = 0.33x + 1.66
 
 Do another conversion (Y or N)=> N
 
 
 
 
 
 Implement the following functions:
 
 getProblem — Displays the user menu, then inputs and returns as the function value the problem number selected.
 
 get2Pt — Prompts the user for the x-y coordinates of both points, inputs the four coordinates, and returns them to the calling function through output parameters.
 
 getPtSlope — Prompts the user for the slope and x-y coordinates of the point, inputs the three values, and returns them to the calling func- tion through output parameters.
 
 
 slopeIntcptFrom2Pt — Takes four input parameters, the x-y coordinates of two points, and returns through output parameters the slope (m) and y-intercept (b).
 
 intcptFromPtSlope — Takes three input parameters, the x-y coordinates of one point and the slope, and returns as the function value the y-intercept.
 
 display2Pt — Takes four input parameters, the x-y coordinates of two points, and displays the two-point line equation with a heading.
 
 displayPtSlope — Takes three input parameters, the x-y coordinates of one point and the slope, and displays the point-slope line equation with a heading.
 
 displaySlopeIntcpt — Takes two input parameters, the slope and y- intercept, and displays the slope-intercept line equation with a heading.
 
 */


#include <iostream>
#include <iomanip>

using namespace std;

int getProblem(); // — Displays the user menu, then inputs and returns as the function value the problem number selected.

void get2Pt(float&, float&, float&, float&); // — Prompts the user for the x-y coordinates of both points, inputs the four coordinates, and returns them to the calling function through output parameters.

void getPtSlope (float&, float&, float&); // — Prompts the user for the slope and x-y coordinates of the point, inputs the three values, and returns them to the calling func- tion through output parameters.

void slopeIntcptFrom2Pt(float, float, float, float, float&,float&); // — Takes four input parameters, the x-y coordinates of two points, and returns through output parameters the slope (m) and y-intercept (b).

float intcptFromPtSlope (float, float, float); // — Takes three input parameters, the x-y coordinates of one point and the slope, and returns as the function value the y-intercept.

void display2Pt (float, float, float, float); // — Takes four input parameters, the x-y coordinates of two points, and displays the two-point line equation with a heading.

void displayPtSlope (float, float, float); //— Takes three input parameters, the x-y coordinates of one point and the slope, and displays the point-slope line equation with a heading.

void displaySlopeIntcpt( float, float); // — Takes two input parameters, the slope and y- intercept, and displays the slope-intercept line equation with a heading.


int main()
{
    //char const SENTINEL = 'Y';
    
    bool running = true;
    
    cout << setprecision(2) << fixed;
    
    while (running)
    {
        int numChoice = getProblem();
        
        if (numChoice == 1)
        {
            float x1;
            float x2;
            float y1;
            float y2;
            float slope;
            float yIntercept;
            
            get2Pt(x1, x2, y1, y2);
            
            slopeIntcptFrom2Pt(x1, y1, x2, y2, slope, yIntercept);
            
            display2Pt (x1, y1, x2, y2);
            
            displaySlopeIntcpt(slope, yIntercept);
            
        }
        else if (numChoice == 2)
        {
            float x1;
            float y1;
            float slope;
            
            getPtSlope (slope, x1, y1);
            
            displayPtSlope(x1, y1, slope);
            
            displaySlopeIntcpt(slope, intcptFromPtSlope( x1, y1,slope));
        }
        
        char again;
        cout << "\nDo you want to do another conversion(Y/N): ";
        cin >> again;
        
        if(again == 'Y')
            running = true;
    }
    system ("pause");
    return 0;
}

// display2Pt — Takes four input parameters, the x-y coordinates of two points, and displays the two-point line equation with a heading.

void display2Pt (float x1, float y1, float x2, float y2)
{
    
    cout << "Two point line equation: \n";
    
    /*
     Two-point form
     m = (1.00 - 3.00)
     -------------
     (-2.00 - 4.00)
     */
    
    cout << "m = " << "(" << y2 << " - " << y1 << ")" << endl;
    cout << "------------" << endl;
    cout << "(" << x2 << " - " << x1 << ")" << endl;
    
}

// displayPtSlope — Takes three input parameters, the x-y coordinates of one point and the slope, and displays the point-slope line equation with a heading.

void displayPtSlope(float x1, float y1, float slope)
{
    cout << "Point-slop form: ";
    
    cout << "y - " << y1 << " = " << slope << "(x - " << x1 << ")" << endl;
    
    //y - valueof(y1) = valueof(slope)*(x - valueof(x1))
    
}

// displaySlopeIntcpt — Takes two input parameters, the slope and y-intercept, and displays the slope-intercept line equation with a heading.

void displaySlopeIntcpt(float slope, float yIntercept)
{
    cout << "Slope intercept form \n ";
    
    /*
     Slope-intercept form
     
     y = 0.33x + 1.66
     
     */
    
    cout << "Y = " << slope << "x + " << yIntercept;
}

// getProblem — Displays the user menu, then inputs and returns as the function value the problem number selected.

int getProblem()
{
    int number;
    
    cout << "This program permits the user to convert \n"
    "either two-point form or pointslope form into slope-intercept form.\n"
    
    "Select the form that you would like to convert to slope-intercept form: \n"
    
    "1) Two-point form (you know two points on the line)\n"
    
    "2) Point-slope form (you know the line’s slope and one point)\n";
    
    cin >> number;
    
    return number;
}

// get2Pt — Prompts the user for the x-y coordinates of both points, inputs the four coordinates, and returns them to the calling function through output parameters.

void get2Pt(float& x1, float& x2, float& y1, float& y2)
{
    cout << "Enter the x-y coordinates of the first point separated by a space: ";
    cin >> x1 >> y1;
    
    cout << "Enter the x-y coordinates of the second point separated by a space: ";
    cin >> x2 >> y2;
}


// getPtSlope — Prompts the user for the slope and x-y coordinates of the point, inputs the three values, and returns them to the calling function through output parameters.

void getPtSlope(float& slope, float& x1, float& y1)
{
    cout << "Enter the slope: ";
    cin >> slope;
    
    cout << "Enter the x-y coordinates of the point separated by a space: ";
    cin >> x1 >> y1;
    
}


// slopeIntcptFrom2Pt — Takes four input parameters, the x-y coordinates of two points, and returns through output parameters the slope (m) and y-intercept (b).

void slopeIntcptFrom2Pt(float x1, float y1, float x2, float y2, float& slope, float& yIntercept)
{
    float y3 = y2 - y1;
    
    float x3 = x2 - x1;
    
    slope = y3 / x3;
    
    yIntercept = intcptFromPtSlope(x1, y1, slope);
    
}


// intcptFromPtSlope — Takes three input parameters, the x-y coordinates of one point and the slope, and returns as the function value the y-intercept.

float intcptFromPtSlope(float x1, float y1, float slope)
{
    return y1 - (x1 * slope);
}