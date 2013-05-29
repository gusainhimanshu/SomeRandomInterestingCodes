/*
 * Suppose we consider a random alphabetic string to represent acircular sequence.
 * The circular sequence can be represented by many possible strings,depending on which position is taken as the start.
 * For example, CTCC, TCCC, CCCT, CCTC are all strings that correspond to the samecircular sequence.
 * Given a random string, output the (lexicographically) smallest string that represents the same circular sequence.
 * (In the above example, CCCT.)First line will contain the number of test cases followed by the test cases separated by newline.
 * The output should contain the corresponding output separated by newline.
 * Sample Input
 * 2
 * IIITDPHDAdmissions
 * CGAGTCAGCT
 * Sample Output
 * AdmissionsIIITDPHD
 * AGCTCGAGTC
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main()
{

    unsigned long int n;
    char str[MAX][MAX];
    char minstr[MAX][MAX];
    printf("INPUT\n");
    scanf("%ld", &n);   //input the number of strings
    int k=0;
    /* Taking strings to be processed as input*/
    for(k; k<n; k++)
    {
        scanf("%s", str[k]);    
    }
    for(k=0; k<n; k++)  //loop for each string
    {
        int i=0;
        int len=0;
        int length=0;
        len=strlen(str[k]); //finding length of the string

        length=len;
        strcpy(minstr[k],str[k]);   //taking a copy of string in minimum string
        while((len) != i)   //loop for te length of the string
        {
            char c= str[k][0];
            int j=0;
            //keep on shifting the charcters in order to get minimum string
            for(j=0; j< (length); j++) 
            {
                str[k][j]=str[k][j+1];
            }
            str[k][len-1]= c;
            /*comparing the character with minimum string character*/
            if(0 > strcmp(str[k],minstr[k]))
            {
                strcpy(minstr[k],str[k]);
            }
            i++;
        }
    }
    printf("OUTPUT\n");
    /*Printing the minimum string*/
    for(k=0; k<n; k++)      
    {
        printf("\n");
        printf("%s", minstr[k]);
    }
    return 0;
}



