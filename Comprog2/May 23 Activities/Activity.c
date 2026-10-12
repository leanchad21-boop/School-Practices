#include <stdio.h>

// Struct for Address
typedef struct {
    char street[50];
    char city[50];
    char barangay[100];
} Address;

// Struct for Course
typedef struct {
    char course[50];
} Course;

// Struct for Student
typedef struct {
    char name[50];
    int age;
    Address address;
    Course course;
} Student;

int main() {

    // Variable declaration
    Student student1;

    // INPUT OF INFORMATION
    printf("Enter Student Name: ");
    scanf(" %[^\n]", student1.name);

    printf("Enter Student Age: ");
    scanf("%d", &student1.age);

    printf("Enter Street: ");
    scanf(" %[^\n]", student1.address.street);

    printf("Enter City: ");
    scanf(" %[^\n]", student1.address.city);

    printf("Enter Barangay: ");
    scanf(" %[^\n]", student1.address.barangay);

    printf("Enter Student Course: ");
    scanf(" %[^\n]", student1.course.course);

    // OUTPUT
    printf("\n             STUDENT INFORMATION             \n");

    printf("             Name: %s\n", student1.name);
    printf("             Age: %d\n", student1.age);

    printf("\n             ADDRESS             \n");
    printf("             Street: %s\n", student1.address.street);
    printf("             City: %s\n", student1.address.city);
    printf("             Barangay: %s\n", student1.address.barangay);

    printf("\n             COURSE             \n");
    printf("             Course: %s\n", student1.course.course);

   return 0;
}