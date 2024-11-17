/*
Aim : WAP to find the factorial of a number using Recursive functions.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/#include<stdio.h>

int factorialRecursive(int num){
 if (num <= 1) {
        return 1;
 }

  return num * factorialRecursive (num-1);
}
  int main(){

    int num;
    printf("\t\t\t Recursive Factorial Function \n\n");

     printf("Enter Number:");
     scanf("%d", &num);


      printf("Factorial of %d is %d", num, factorialRecursive (num));

return 0;

}

/*  OUTPUT:
Enter Number:5
Factorial of 5 is 120
*/
