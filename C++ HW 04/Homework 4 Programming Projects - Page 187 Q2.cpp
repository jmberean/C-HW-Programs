/*
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/28/2015
 Homework 4
 
 Programming Projects: Page 187 Q2
 
 2. Write functions that display each of your initials in block letter form. Use these functions to display your initials. */

// file: Homework 4 Programming Projects - Page 187 Q2.cpp
// This program diplays each of my initials in block letter form.

#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.
                                // Header <iostream that defines the standard input/output stream objects.
using namespace std;            // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

void initialJ();

void initialB();

int main()                      /*  A function is a collection of related statements that perform a specific operation. Exactly one main function per program.
                                    int indicates the return/data type of the function as an integer. */
{                               // { opens the main function.
    
    /* Function Prototypes: Prototypes precede main function (after #include directives)
     
    
     - Declares the function to the compiler
     - Appears before function main.
     - Tells compiler the function’s type, its name, and information about arguments. */
    
    
    initialJ();         // The relative order of the function call statements affect their order of execution.
    initialB();
    
    return 0;       // Closes program, no errors
}                   // Closes function

// Function definitions - follow main function

/*  A function with void return type ends by executing a return statement with no returned value. 
    The void type may also appear as the sole argument of a function prototype to indicate that the function takes no arguments. */

void initialJ()
{
                    // executable statement
    
    cout <<
    
    "################ \n"
    "       ##        \n"
    "       ##        \n"                       // We print out the first initial.
    "       ##        \n"
    " ##    ##        \n"
    " ##    ##        \n"
    " ########        \n";
    
}

void initialB()
{
    
    cout << "\n";
    
    cout <<
    
    "###########      \n"
    "##         ##    \n"
    "##          ##   \n"                       // We print out the second initial
    "##        ##    \n"
    "###########       \n"
    "##         ##    \n"
    "##           ##  \n"
    "##          ## \n"
    "#############   \n";
    
}