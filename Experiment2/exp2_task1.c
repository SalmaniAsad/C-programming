/* AIM: WAP to print if entered number is even or odd.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/

    #include<stdio.h>
int main()
{
int num;

printf("\t\t\t\t\t\t **Even Odd Finder** \n\n\n");

printf("Enter Number:");
scanf("%d",&num);

    if(num%2==0)
{
    printf("%d is a Even Number",num);
}
    else
{
    printf("%d is a Odd Number",num);
}
  return 0;
}

/*  OUTPUT
    EVEN:
        Enter Number:10
        10 is a Even Number.

    ODD:
        Enter Number:5
        5 is a Odd Number.
*/
