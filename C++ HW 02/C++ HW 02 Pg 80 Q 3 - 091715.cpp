/*
John m Berean 
Professor Ye
CSP*141*001 (9165) Intro to Programming in C++ */

/* HW 02 Page 80 Question 3 - 09/17/15

    3.  Write a program that asks the user to enter the list price of an item and
        the discount as a percentage, and then computes and displays the sale
        price and the savings to the buyer. For example, if the list price is $40
        and the discount percentage is 25%, the sale price would be $30 and the
        savings to the buyer would be $10. 
        
    Use the formulas -
    
    percentAsFraction = percent / 100.0
    discount = listPrice* percentAsFraction
    salePrice = listPrice discount */

   

// This program computes the salesprice of any item

#include <iostream>             // compiler directive including input output stream.

using namespace std;            // this program uses objects defined by a standard namespace std;
                                // as defined by C++ standard library.

int main()                      /*  Exactly one main function per program.
                                    A function is a collection of related statements that perform a specific operation.
                                    int indicates the return/data type of the function.
                                    (  ) indicates no special information passed to the function by the operating system.
                                    program starts at main function. */
                                
{                               // { opens the main function.
    
    //  declaration statement - declaring the data the function needs:
     
    float salePrice;    // float is a real number. all real numbers not including 0.                  
    float percent;      // declares the the variables salePrice, percent, listPrice, percentAsFunction and discount as float return/data type.
    float listPrice;
    float percentAsFraction;
    float discount;

    /*  Executable statements - allows the compiler to specify 
                                the actions the program will take. cout << */
                                
    cout << "This Program computes the salesprice of any item. \n\n";       // we inform the user that this Program computes the salesprice of any item. 
    
    cout << "Please enter the percentage the percentage your item is discounted in; ";          // we request the user to enter their percentage off.
        cin >> percent;         // user enters their percentage off.
        
    cout << "\n";       // (\n) skips lines.
    
    percentAsFraction = (percent / 100.0);      // the neccesary formula to calculate there number into a percentage.
    
    cout << "Please enter the listing price of your item: ";    // we ask the user enter the listing price of their item.
        cin >> listPrice;                                       // user enters their listed price.
        
    cout << "\n\n";                                 // skips more lines, making the program easier to read for the user.
    
    discount = listPrice * percentAsFraction;       // the neccesary formula to calculate there discount off in dollars $.
    
    cout << "Your discount is:$ " << discount;      // we read out our users discount in dollars $.
    
    cout << "\n";                                   // (\n) skips lines.
    
    salePrice = listPrice - discount;       // formula calculates the sale price by taking the listed price and subtracting it by the discount price
    
    cout << "The sales price of your item is:$ " << salePrice;      // outputs the sale price to the user.
    
    return 0;   // closes program, informs program ran without errors.
}               // closes the main function.