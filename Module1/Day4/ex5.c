#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

void swapFields(struct Student* student1, struct Student* student2) {
    // Swap the name field
    char temp[50];
    strcpy(temp, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, temp);

    // Swap the age field
    int tempAge = student1->age;
    student1->age = student2->age;
    student2->age = tempAge;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);

    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);

    printf("\nBefore swapping:\n");
    printf("Student 1 - Name: %s, Age: %d\n", student1.name, student1.age);
    printf("Student 2 - Name: %s, Age: %d\n", student2.name, student2.age);

    // Swap the fields using the swapFields function
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1 - Name: %s, Age: %d\n", student1.name, student1.age);
    printf("Student 2 - Name: %s, Age: %d\n", student2.name, student2.age);

    return 0;
}