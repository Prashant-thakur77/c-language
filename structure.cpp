#include <stdio.h>
#include <string.h>

// Define a structure to hold student information
struct Student {
    int rollNo;
    float marks;
    char name[50];
};

int main() {
    int n, i;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Clear the input buffer
    getchar();

    // Create an array of structures
    struct Student students[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);

        // Clear the input buffer
        getchar();

        printf("Name: ");
        gets(students[i].name); // Using gets() to input the name

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Clear the input buffer
        getchar();
    }

    // Display student details
    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
