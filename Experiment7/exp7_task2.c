 /*
     AIM: WAP to calculate sum of two matrix.
   Name: Salmani Asad Anwarul
    UIN: 241A010
    DIV: A
    DEPTT.: AI&DS
    ROLL-NO: 10
    */


   #include<stdio.h>

   int main () {
        int rows, cols, i, j;

       printf("Enter the number of rows and columns: ");
        scanf("%d %d", &rows, &cols);

      // Declare two matrices and a result matrix
        int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

      // Input elements of the first matrix
        printf("Enter elements of the first matrix:\n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                scanf("%d", &matrix1[i][j]);
            }
        }

       // Input elements of the second matrix
        printf("Enter elements of the second matrix:\n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                scanf("%d", &matrix2[i][j]);
            }
        }

       // Calculate the sum of the two matrices
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

       // Output the result
        printf("Sum of the two matrices is:\n");
       for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }

       return 0;
    }

   /*
    OUTPUT
    Enter the number of rows and columns: 3
3
Enter elements of the first matrix:
1
2
3
4
5
6
7
8
9
Enter elements of the second matrix:
9
8
7
6
5
4
3
2
1
Sum of the two matrices is:
10 10 10
10 10 10
10 10 10
    */
