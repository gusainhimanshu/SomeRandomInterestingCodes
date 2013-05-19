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

    //long int n;
    char str[MAX];
    char minstr[MAX];
    int i=0;
    int len=0;
    int length=0;
    printf("Enter the string : ");
    scanf("%s",str);
    len=strlen(str); //finding length of the string

    length=len;
    strcpy(minstr,str);
    while((len) != i)
    {
        char c= str[0];
        int j=0;
        for(j=0; j< (length); j++)
        {
            str[j]=str[j+1];
        }
        str[len-1]= c;
        if(0 > strcmp(str,minstr))
        {
            strcpy(minstr,str);
        }
        i++;
    }
    printf("Minimum str is: %s", minstr);
    return 0;
}
