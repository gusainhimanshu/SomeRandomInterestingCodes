//Find the given number is apower of two
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(0 == (n&=(n-1)))
    {
        printf("\n\nNumber is a power of two");
    }
    else
    {
        printf("\n\nNumber is NOT a power of two");
    }
    return 0;
}
