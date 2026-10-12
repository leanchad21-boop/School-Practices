#include <stdio.h>

int main() {
    FILE *fp;

    // Declare and initialize variables
    char name[] = "Lean Chad";
    int age = 19;
    char program[] = "Diploma in Information Technology";
    char section[] = "DIT 1-1";

    // Variables for reading data
    char r_name[50];
    int r_age;
    char r_program[100];
    char r_section[20];

    // Create and open file
    fp = fopen("Lean_Chad.txt", "w");

    // Check if file was created successfully
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    // Save data into file using fprintf()
    fprintf(fp, "%s\n", name);
    fprintf(fp, "%d\n", age);
    fprintf(fp, "%s\n", program);
    fprintf(fp, "%s\n", section);

    // Close the file
    fclose(fp);

    // Open file again for reading
    fp = fopen("Lean_Chad.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read data from file
    fgets(r_name, sizeof(r_name), fp);
    fscanf(fp, "%d\n", &r_age);
    fgets(r_program, sizeof(r_program), fp);
    fgets(r_section, sizeof(r_section), fp);

    // Display the contents
    printf("Student Information:\n");
    printf("Name: %s", r_name);
    printf("Age: %d\n", r_age);
    printf("Program: %s", r_program);
    printf("Section: %s", r_section);

    // Close the file
    fclose(fp);

    return 0;
}