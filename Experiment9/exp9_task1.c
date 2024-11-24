/*
    Aim: Design a structure student_record to contain
         name, roll_number and total_marks obtained. Write a
         program to read 5 students data from the user and then
         display the topper on the screen.
    Name: Salmani Asad Anwarul
    UIN: 241A010
    DIV: A
    DEPT.: AI&DS
    ROLL-NO: 10
*/
#include<stdio.h>
#include<string.h>

// Defining the structure to hold student data.
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

// Function to read student data
void input_student_data(struct student_record students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
         // getchar();// To consume the newline left by the previous input
        //gets(students[i].name);
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);
    }
}

    // Function to find and return the index of the student with the highest marks
    int find_topper(struct student_record students[], int n) {
        int topper_index = 0;
        for (int i = 1; i < n; i++) {
            if (students[i].total_marks > students[topper_index].total_marks) {
                topper_index = i;
            }
        }
        return topper_index;
    }

    int main() {
    int n = 5; //Number of Students
    struct student_record students[n];

    printf("\t\t *** Topper Finder *** \n\n");

    //Input student data
    input_student_data(students, n);

    // Find the Topper
    int topper_index = find_topper(students, n);

    // Display topper details
    printf("\nTopper Details:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n",students[topper_index].roll_number);
    printf("Total Marks: %.2f\n",students[topper_index].total_marks);

    return 0;
    }

/*  OUTPUT:

    Enter details for student 1:
        Name: A
        Roll Number: 1
        Total Marks: 85
    Enter details for student 2:
        Name: B
        Roll Number: 2
        Total Marks: 79
    Enter details for student 3:
        Name: C
        Roll Number: 3
        Total Marks: 83
    Enter details for student 4:
        Name: D
        Roll Number: 4
        Total Marks: 89
    Enter details for student 5:
        Name: Z
        Roll Number: 5
        Total Marks: 67

    Topper Details:
        Name: D
        Roll Number: 4
        Total Marks: 89.00
*/
