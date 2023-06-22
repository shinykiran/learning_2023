#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int size;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array of structures
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    // Display the array of structures
    displayArray(students, size);

    // Free the dynamically allocated memory
    free(students);

    return 0;
}