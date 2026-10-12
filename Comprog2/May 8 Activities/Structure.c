#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int age;
    char section;
    float grade;
};

// Function to input student data
void inputStudent(struct Student *s) {

    printf("Enter Name: ");
    fgets(s->name, sizeof(s->name), stdin);

    // Remove newline character
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &s->age);

    printf("Enter Section: ");
    scanf(" %c", &s->section);

    printf("Enter Grade: ");
    scanf("%f", &s->grade);

    getchar(); // Clear input buffer
}

// Function to display student data
void displayStudent(struct Student s) {

    printf("\nStudent Information\n");
    printf("-------------------\n");
    printf("Name    : %s\n", s.name);
    printf("Age     : %d\n", s.age);
    printf("Section : %c\n", s.section);
    printf("Grade   : %.2f\n", s.grade);
}

int main() {

    // Declare structure variables
    struct Student student1, student2;

    // Input data
    printf("Enter details for Student 1\n");
    inputStudent(&student1);

    printf("\nEnter details for Student 2\n");
    inputStudent(&student2);

    // Display data
    displayStudent(student1);
    displayStudent(student2);

    return 0;
}