#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int A[] = {9,8,7,6,5,4};
int *PTR_A;
int COUNT = 0;
void FUNC(){
    while(COUNT <= 5){
        PTR_A = &A[COUNT++];
        printf("ADDRESS: %d\tVALUE: %d\n",PTR_A,*PTR_A);
    }
}
int main(){
    FUNC();
    return 0;
}
