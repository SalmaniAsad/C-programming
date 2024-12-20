/* AIM: WAP to find the sum of all Odd Numbers between numbers entered by the user.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/

#include<stdio.h>
int main()

{
//Variable Declaration

int start_num,end_num,i,sum=0;

printf("\t\t\t\t\tSum Of Odd Numbers\n\n\n\n");

//Take Input from User

printf("Enter Start Number:");
scanf("%d",&start_num);

printf("Enter End Number:");
scanf("%d",&end_num);

//Check if Starting Number is Higher than Ending Number

if (start_num>end_num)
{
    printf("Ending Number should be Higher than the Starting Number");

    return 1;
}

//Add All Odd Numbers

for(i=start_num;i<=end_num;i++)
{
    if(i%2!=0)
    {
    sum=sum+i;
    }
}
    printf("The sum of all Odd Numbers from %d and %d is %d",start_num,end_num,sum);
return 0;
}
/*  OUTPUT: 
    Enter Start Number:1
    Enter End Number:10
    The sum of all Odd Numbers from 1 and 10 is 25.
*/
