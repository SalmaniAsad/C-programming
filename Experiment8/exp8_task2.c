 /* AIM: WAP to check if the entered string is a palindrome or not.
   Name: Salmani Asad Anwarul
    UIN: 241A010
    DIV: A
    DEPTT.: AI&DS
    ROLL-NO: 10
    */
    #include <stdio.h>

int main() {
    char str[100];
    int len = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string
    while (str[len] != '\0') {
        len++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }

    printf("The string is a palindrome.\n");
    return 0;
}



/*
OUTPUT
Enter a string: LEVEL
The string is a palindrome.

Enter a string: RADAR
The string is a palindrome.


Enter a string: ARROW
The string is not a palindrome.


*/
