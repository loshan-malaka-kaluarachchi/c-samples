#include <stdio.h>

int VAL;
int NUM = 7;
VAL = NUM%2;
    switch(VAL){

    case 0: while(NUM > 0){
                printf("VAL: %d NUM: %d\n",VAL,NUM--);
            }
            while(NUM <= 0)
            {
                printf("VAL: %d NUM: %d\n",VAL,NUM++);
            }


    case 1: while(NUM > 0){
                printf("VAL: %d NUM: %d\n",VAL,NUM--);
            }
            while(NUM <= 0){
                printf("VAL: %d NUM: %d\n",VAL,NUM++);
            }

    }

    return 0;
