#include<stdio.h>
int main()
{
    int number[512];
    char symbol;
    int i=0;

while(i<12)
{
    number[i]=i;
    symbol = i;

    printf("Character %d -> %c\n\n",i,symbol);

    i=++i;
}



  return 0;
}
