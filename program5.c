/*Write a program to find the position of MSB
E.g positio of MSB for integer 8 is 4
    1000
    similarly for 16 it is 5
    10000
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int num;
    int ans;
    printf("Enter the number you want to find maximum bit: ");
    scanf("%d", &num);

    printf("\n");
    double lg2=log(2);
    ans=floor(log(num)/lg2);
    ans++;
    printf("\n The number of digits in binary is: %d", ans);
    return 0;
}
