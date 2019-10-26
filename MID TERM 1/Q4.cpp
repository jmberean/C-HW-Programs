/*
 
 Programmer:   John m Berean
 
 Instructer:   Professor Ye
 
 Date:         10/23/2015
 
 MID-TERM
 
 Q4
 
 */

#include <iostream>
#include <cmath>

using namespace std;

char switchFunc(char);
char ifFunc (char);

int main()
{
    char L;
    char sF;
    char ifF;
    
    cout << "Enter the letter: ";
    
    cin >> L;
    
    sF = switchFunc(L);
    
    ifF = ifFunc (L);
    
    cout << "\n\nSwitch statement #" << sF << "\n\nif statement #" << ifF;
    
    system ("pause");
    return 0;
}
char switchFunc(char L)
{
    switch(L)
    {
        case 'a':
        case 'b':
        case 'c':
        {
            return '2';
        }
            break;
            
        case 'd':
        case 'e':
        case 'f':
        {
            return '3';
        }
            break;
            
        case 'g':
        case 'h':
        case 'i':
        {
            return '4';
        }
            break;
            
        case 'j':
        case 'k':
        case 'l':
        {
            return '5';
        }
            break;
            
        case'm':
        case'n':
        case'o':
        {
            return '6';
        }
            break;
            
        case'p':
        case'q':
        case'r':
        case's':
        {
            return '7';
        }
            break;
            
        case't':
        case'u':
        case'v':
        {
            return '8';
        }
            break;
            
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        {
            return '9';
        }
            break;
            
            
        case 'A':
        case 'B':
        case 'C':
        {
            return '2';
        }
            break;
            
        case 'D':
        case 'E':
        case 'F':
        {
            return '3';
        }
            break;
            
        case 'G':
        case 'H':
        case 'I':
        {
            return '4';
        }
            break;
            
        case 'J':
        case 'K':
        case 'L':
        {
            return '5';
        }
            break;
            
        case'M':
        case'N':
        case'O':
        {
            return '6';
        }
            break;
            
        case'P':
        case'Q':
        case'R':
        case'S':
        {
            return '7';
        }
            break;
            
        case'T':
        case'U':
        case'V':
        {
            return '8';
        }
            break;
            
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        {
            return '9';
        }
            break;
            
        default:        // L = -1;
        {
            return (-1);
        }
            
    }
}

char ifFunc(char L)
{
    
    if ((L=='a')||(L=='b')||(L=='c')||(L=='A')||(L=='B')||(L=='C'))
    {
        return '2';
    }
    
    else if ((L=='d')||(L=='e')||(L=='f')||(L=='D')||(L=='E')||(L=='F'))
    {
        
        return '3';
        
    }
    
    else if ((L=='g')||(L=='h')||(L=='i')||(L=='G')||(L=='H')||(L=='I'))
    {
        
        return '4';
        
    }
    
    else if ((L=='j')||(L=='k')||(L='l')||(L=='J')||(L=='K')||(L=='L'))
    {
        
        return '5';
        
    }
    
    else if ((L=='m')||(L=='n')||(L='o')||(L=='M')||(L=='N')||(L=='O'))
    {
        
        return '6';
        
    }
    
    else if ((L=='p')||(L=='q')||(L='r')||(L=='s')||(L=='P')||(L=='Q')||(L=='R')||(L=='S'))
    {
        
        return '7';
        
    }
    
    else if ((L=='t')||(L=='u')||(L='v')||(L=='T')||(L=='U')||(L=='V'))
    {
        return '8';
    }
    
    else if ((L=='w')||(L=='x')||(L='y')||(L=='z')||(L=='W')||(L=='X')||(L=='Y')||(L=='Z'))
    {
        return '9';
    }
    
    else;
    {
        return (-1);
    }
}

