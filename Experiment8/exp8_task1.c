/* Aim : WAP to find length of string without using library function.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/

#include<stdio.h>

int main()
{
     char str[100];
     int length = 0; // VARIBALE
     printf("\t\t *** String Length Finder *** \n\n");
     printf("Enter Your String:"); gets (str);
     while (str[length] != '\0')
     {
          length++;
     }
     printf("String Length: %d Charachters", length);
     return 0;
}
/*          OUTPUT
                 *** String Length Finder ***

Enter Your String:Asad
String Length: 4 Charachters
*/
