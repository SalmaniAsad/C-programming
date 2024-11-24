/* AIM: WAP to define a counter function to print how many times the function is called. use storage classes.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/
#include<stdio.h>

void counter()
{
  static int count = 0;
  count++;
  printf(" COUNTER FUNCTION CALLER : %d\n",count);
}

int main()
{ int i;
   printf("\t\t\t *** STORAGE CLASS ***\n");

   for (i=1;i<=10;i++)
{
    counter();

}
   return 0;
}

/*          OUTPUT

                       *** STORAGE CLASS ***
 COUNTER FUNCTION CALLER : 1
 COUNTER FUNCTION CALLER : 2
 COUNTER FUNCTION CALLER : 3
 COUNTER FUNCTION CALLER : 4
 COUNTER FUNCTION CALLER : 5
 COUNTER FUNCTION CALLER : 6
 COUNTER FUNCTION CALLER : 7
 COUNTER FUNCTION CALLER : 8
 COUNTER FUNCTION CALLER : 9
 COUNTER FUNCTION CALLER : 10
*/
