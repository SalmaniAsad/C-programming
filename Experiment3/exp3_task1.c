/* AIM: WAP to desin a menu driven calculator using switch and goto.
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/

#include <stdio.h>
int main()
{
     float num1,num2,result;
     int mod_result;
     char operator;

printf("\t\t\t\t\t\t **calculator**\n\n");
printf("\t operations :\n");
printf("\t\t +:addition\n");
printf("\t\t -:subtraction\n");
printf("\t\t *:multiplication\n");
printf("\t\t /: division\n");
printf("\t\t %%:modulus\n");

repeat:
    printf("Enter First Operand : ");
    scanf("%f",&num1);
    printf("Enter Second Operand : ");
    scanf("%f",&num2);
    printf("Enter Operation: ");
    scanf(" %c",&operator);

    switch(operator){
         case'+':
         result = num1 + num2;
         printf("%.1f + %.1f = %.1f\n", num1,num2,result);
         break;
         case'-':
         result = num1 - num2;
         printf("%.1f - %.1f = %.1f\n",num1,num2,result);
         break;
         case'*':
         result = num1 * num2;
         printf("%.1f * %.1f = %.1f\n",num1,num2,result);
         break;
         case'/':
             if(num2==0){
                printf("cannot divide by zero");
                }else
                result = num1 / num2;
                printf("%.1f / %.1f = %.1f",num1,num2,result);
         break;
         case'%':
            if((int)num2==0){
                printf("cannot perform modulus by zero in dinominator");
            }else{
            mod_result = (int)num1 % (int)num2;
            printf("%.0f %% %.0f = %d\n",num1,num2,result);
            }
            break;
    default:
        printf("not correct operator, try again");
    break;
    }
    printf(" \n coutinue Y/N?: ");
    scanf(" %c",&operator);
    if(operator == 'N'|| operator == 'n'){
    printf("Thank you for using calculator");
    return 0;
    }
    printf("\n\n");
    goto repeat;

return 0;
}
/*  OUTPUT:
                                                  **calculator**

         operations :
                 +:addition
                 -:subtraction
                 *:multiplication
                 /: division
                 %:modulus
Enter First Operand : 1
Enter Second Operand : 2
Enter Operation: +
1.0 + 2.0 = 3.0

 coutinue Y/N?: Y


Enter First Operand : 2
Enter Second Operand : 1
Enter Operation: -
2.0 - 1.0 = 1.0

 coutinue Y/N?: Y


Enter First Operand : 1
Enter Second Operand : 2
Enter Operation: *
1.0 * 2.0 = 2.0

 coutinue Y/N?: Y


Enter First Operand : 1
Enter Second Operand : 2
Enter Operation: /
1.0 / 2.0 = 0.5
 coutinue Y/N?: Y


 Enter First Operand : 3
Enter Second Operand : 2
Enter Operation: %
3 % 2 = 0

 coutinue Y/N?: N
Thank you for using calculator.
*/
