/*
Aim : WAP to find prime number between two numbers
Name: Salmani Asad Anwarul
UIN: 241A010
DIV: A
DEPTT.: AI&DS
ROLL-NO: 10
*/

#include<stdio.h>
int isPrimeNumber(int num);

int isPrimeNumber(int num){
    for (int i=2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
int start_num,end_num,i;

printf("\t\t\t ***Prime Number Finder \n\n\n");

printf("Enter The Starting Number:");
scanf("%d",&start_num);
printf("Enter The Ending Number:");
scanf("%d",&end_num);

i=start_num<=i?2:start_num;
printf("Prime Numbers Between %d and %d is: ",start_num,end_num);
while (i<=end_num){
    if(isPrimeNumber(i)){
        printf("%d ", i);
    }

    i++;

}


}
