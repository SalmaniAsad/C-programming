/*
    Aim: WAP to print the elements of an array in reverse order using pointers.
    Name: Salmani Asad Anwarul
    UIN: 241A010
    DIV: A
    DEPT.: AI&DS
    ROLL-NO: 10
*/
#include<stdio.h>
int main() {

    int n;

    printf("\t\t *** Array Reverser *** \n\n");

    //Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;  //pointer to array

    //Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d : ", i);
        scanf("%d", ptr + i); //Input directly into the memory location using the pointer
    }

    // Print the elements in reverse order using pointers
    printf("\nArray elements in reverse order:\n");
    for (int i = n - 1; i>= 0; i--){
        printf("%d ", *(ptr + i));  // Access elements using pointer arithmetic
    }
    printf(" \n");

    return 0;
}

/*      OUTPUT:

                 *** Array Reverser ***

    Enter the size of the array: 3
    Enter the elements of the array:
    0 : 77
    1 : 88
    2 : 99

    Array elements in reverse order:
    99 88 77
*/
