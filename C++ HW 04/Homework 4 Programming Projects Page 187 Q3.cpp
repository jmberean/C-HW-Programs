/*
 John m Berean
 Professor Ye
 CSP*141*001 (9165) Intro to Programming in C++
 09/28/2015
 Homework 4
 
 Programming Projects: Page 187 Q3
 
    3.  Write three functions, one that displays a circle, one that displays a rectangle,
        and one that displays a triangle. Use these functions to write a
        complete C++ program from the following outline:

int main()
{
// Draw circle.
// Draw triangle.
// Draw rectangle.
// Display 2 blank lines.
// Draw triangle.
// Draw circle.
// Draw rectangle.
return 0;
}

*/

// file: Homework 4 Programming Projects Page 187 Q3.cpp
/* This program will have three functions one that displays a circle, one that displays a rectangle, and one that displays a triangle
 and use these functions to write a complete C++ program from the given outline. */

#include <iostream>             // Compiler directive includes Standard Input / Output Streams Library.
                                // Header <iostream that defines the standard input/output stream objects.
using namespace std;            // This program uses objects defined by a standard namespace std; as defined by C++ standard library.

/* Functions with no type. The use of void
 
    Requires the declaration to begin with a type. This is the type of the value returned by the function.
    But if the function does not need to return a value. In this case, the type to be used is void, which is a special type
    to represent the absence of value. For example, a function that simply prints a message may not need to return any value:

type name ( argument1, argument2 ...) 
{ 
 statements 
}

void apple()
{
... cout << "....";
}
 
*/

void circle();      // void argument circle
void triangle();    // void argument triangle
void rectangle();   // void argument rectangle

int main()                      /*  A function is a collection of related statements that perform a specific operation. Exactly one main function per program.
                                 int indicates the return/data type of the function as an integer. */
{                               // { opens the main function.
    
    /* Function Prototypes: Prototypes precede main function (after #include directives)
     
     
     - Declares the function to the compiler
     - Appears before function main.
     - Tells compiler the function’s type, its name, and information about arguments.

Function call statements: The relative order of the function call statements affect their order of execution. */
    
circle();               // function call statement Circle
triangle();             // function call statement triangle
rectangle();            // function call statement rectangle
cout << "\n\n";         // ( \n ) skips lines
triangle();             // function call statement triangle
circle();               // function call statement circle
rectangle();            // function call statement rectangle

return 0;       // closes program, ran fine without errors, returns control to the computer
}              // closes function

/* Function definitions - follow main function

    A function with void return type ends by executing a return statement with no returned value.
    The void type may also appear as the sole argument of a function prototype to indicate that the function takes no arguments. */

void circle()

{
    cout << 

"          #########         \n"
"        ###       ###       \n"
"      ###           ###     \n"
"     ###             ###    \n"
"     ###             ###    \n"
"     ###             ###    \n"
"      ###           ###     \n"
"        ###       ###       \n"
"          #########         \n";
}

void triangle()                     

{
    cout << 
    
"              #             \n"
"             ###            \n"
"            ## ##           \n"
"           ##   ##          \n"
"          ##     ##         \n"
"         ##       ##        \n"
"        ##         ##       \n"
"       ##           ##      \n"
"      ###           ###     \n"
"     ###################    \n";

}

void rectangle()

{
    
    cout << 
       
"    #####################   \n"
"    ##                 ##   \n"
"    ##                 ##   \n"
"    ##                 ##   \n"
"    ##                 ##   \n"
"    ##                 ##   \n"
"    ##                 ##   \n"
"    #####################   \n";
               
}