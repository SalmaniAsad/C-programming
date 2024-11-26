/*
    Aim: WAP to add two numbers using pointers.
    Name: Salmani Asad Anwarul
    UIN: 241A010
    DIV: A
    DEPT.: AI&DS
    ROLL-NO: 10
*/

#include<stdio.h>
int main() {
    int num1,num2,sum;
    int *ptr1, *ptr2;

    printf("\t\t *** Addition using Pointers *** \n\n");

    //Input the numbers
    printf("Enter First Number:");
    scanf("%d",&num1);

    printf("Enter Second Number:");
    scanf("%d",&num2);

    //Assign the address of num1 and num2 to the pointers
    ptr1 = &num1;
    ptr2 = &num2;

    //Add the value pointed to by ptr1 and ptr2
    sum = *ptr1 + *ptr2;

    //Display the result
    printf("The sum of %d and %d is: %d\n",num1,num2,sum);

    return 0;

}
/*      OUTPUT:

                *** Addition using Pointers ***

    Enter First Number:10
    Enter Second Number:5
    The sum of 10 and 5 is: 15
*/
