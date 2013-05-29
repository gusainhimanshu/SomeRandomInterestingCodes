//Program to calculate next 8 multiple of a given number without loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n=0;
    unsigned int num=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    num=(n&(0xffffff8))+8; //n&0xffffff8 basically gives the nearest multiple of 8 which is less than n

    printf("\n\nThe next multiple of 4 after this number is: %d\n\n", num);
    return 0;
}
