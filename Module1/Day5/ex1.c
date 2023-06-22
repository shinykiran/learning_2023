#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(char* input, struct Student* students, int size) {
    char* token;
    int i = 0;

    // Tokenize the input string using space as the delimiter
    token = strtok(input, " ");

    // Iterate through the tokens and initialize the array of structures
    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ");
        strcpy(students[i].name, token);

        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        i++;

        token = strtok(NULL, " ");
    }
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array of structures
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    getchar(); // Clear the input buffer

    char input[100];
    printf("Enter the string of student details: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove trailing newline

    parseString(input, students, size);

    // Display the initialized array of structures
    printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}