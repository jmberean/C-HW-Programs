/*
John m Berean
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++
09/28/2015
Homework 4

Section 3.4 Page 143  Q3

    3.  Write a complete program for the problem described in Self-Check Exercise 2.

    2.  Draw a structure chart for a program with three function subprograms that displays POPS in a vertical column of block letters.
*/


#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.
// Header <iostream that defines the standard input/output stream objects.

using namespace std;        // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

// Function protoypes

void p1();
void o();
void p2();
void s();

int main()                      /*  A function is a collection of related statements that perform a specific operation.
                                 Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer
                                 (  ) indicates no special information passed to the function by the operating system.
                                 program starts at main function. */

{                               // { opens the main function.
    
    // Function call statements

    p1();
    o();
    p2();
    s();
    
    return 0;
}

// Function definitions

void p1()
{
    cout <<
    
    " ###############       \n"
    "##              ##     \n"
    "##   #######     ##    \n"
    "##   #      #    ##    \n"
    "##   #      #    ##    \n"
    "##   #######    ##     \n"
    "##             ##      \n"
    "##     ########        \n"
    "##    ##              \n"
    "##    ##              \n"
    "##    ##              \n"
    "##    ##              \n"
    "##    ##              \n"
    "########              \n";
    
}

void o()
{
    cout <<
    
    "      ############          \n"
    "    ###          ###        \n"
    "  ###              ###      \n"
    " ###                ###     \n"
    "###                  ###    \n"
    " ###                ###     \n"
    "   ###             ###      \n"
    "     ###         ###        \n"
    "       ###########          \n";
    
}



void p2()
{
    cout <<
    
    " ###############       \n"
    "##              ##     \n"
    "##   #######     ##    \n"
    "##   #      #    ##    \n"
    "##   #      #    ##    \n"
    "##   #######    ##     \n"
    "##             ##      \n"
    "##      #######        \n"
    "##     ##              \n"
    "##     ##              \n"
    "##     ##              \n"
    "##     ##              \n"
    "##     ##              \n"
    "#########              \n";
    
}


void s()
{
    cout <<
    
    "      ##############      \n"
    "    ##              ##    \n"
    "   ##                ##   \n"
    "  ##      ######      ##  \n"
    "  ##      #    #      ##  \n"
    "  ##      #    #      ##  \n"
    "  ##      #    #      ##  \n"
    "  ##      #    #########  \n"
    "  ##      #               \n"
    "  ##       ###            \n"
    "   ###        ###         \n"
    "     ###         ###      \n"
    "       ###         ###    \n"
    "         ####        ###  \n"
    "            ####      ##  \n"
    "   #######      #     ##  \n"
    "   ##     #     #     ##  \n"
    "   ##     #     #     ##  \n"
    "   ##     #     #     ##  \n"
    "   ##     #     #     ##  \n"
    "   ##     #######     ##  \n"
    "   ##                 ##  \n"
    "    ##               ##   \n"
    "     ##             ##    \n"
    "       #############      \n";
    
    
}
