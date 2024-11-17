/* AIM: WAP to get students PCM marks from the user and find the average.Use conditional operator to print if the student is eligible for admission. Eligibility criteria is 50% in PCM.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/
#include<stdio.h>
int main()
{  int p,c,m,avg;
    printf("Enter physics marks:");
    scanf("%d",&p);
 printf("Enter Chemistry marks:");
    scanf("%d",&c);
     printf("Enter Mathematics marks:");
    scanf("%d",&m);
    avg=(p+c+m)/3;
    printf ("PCM avg= %d\n",avg);
     avg>=50?printf("Eligible for Admission" ):printf("Not Eligible for Admission");

     return 0;
}

/*    OUTPUT
ELIGIBLE FOR ADMISSION:
        Enter physics marks:67
        Enter Chemistry marks:68
        Enter Mathematics marks:69
        PCM avg= 68
        Eligible for Admission.

NOT ELIGIBLE FOR ADMISSION:
        Enter physics marks:45
        Enter Chemistry marks:46
        Enter Mathematics marks:47
        PCM avg= 46
        Not Eligible for Admission.
*/
