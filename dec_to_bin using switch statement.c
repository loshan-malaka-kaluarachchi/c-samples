#include <stdio.h>
int _newbin()
{
    int input=10;
    int bin[4];
    int number;

/******************************************************************************************/
    number=input%2;
    
    
    
    

        switch(number)

        {
            case 0:                
                    number = number/2;
                    bin[3] = 0;
                    break;
            case 1:
                    --number;
                    bin[3] = 1;                
                    break;
        }
    
    
}
