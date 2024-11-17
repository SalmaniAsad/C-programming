/*
Aim : WAP to find the factorial of a number using iterative functions.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/#include<stdio.h>
int factorialIterative(int num);
int factorialIterative(int num){
    int prod = 1;
    for(int i=1; i<= num; i++){
        prod *=i;
        }

    return prod;
}

int main () {
    int num;

    printf("\t\t\t *** Iterative Factorial Function *** \n\n");

    printf("Enter the Number:");
    scanf("%d",&num);

    printf("Factorial of %d is %d", num, factorialIterative(num));

    return 0;
}
/*  OUTPUT:
    Enter the Number:5
    Factorial of 5 is 120
*/
