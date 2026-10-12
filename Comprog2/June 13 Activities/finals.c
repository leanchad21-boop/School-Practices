#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char first_name[15];
    char last_name[15];
    char program_code[10];
    int age;
    float grade;
    float final_grade;
} Student;

float total_grade(float a, float b, float c, float d, float e)
{
    float seventy_grade = ((a + b + c + d + e) / 5) * 0.7;
    float thirty_grade = e * 0.3;

    return seventy_grade + thirty_grade;
}

void output_grade(Student *s, float computed_grade)
{
    printf("\nFullname: %s %s\n", s->first_name, s->last_name);
    printf("Program Code: %s\n", s->program_code);
    printf("Age: %d\n", s->age);

    printf("\nYour desired grade is %.2f\n", s->grade);

    s->final_grade = computed_grade;

    printf("Your Grade based on your computation is %.2f\n\n",
           s->final_grade);

    if (s->grade >= s->final_grade)
    {
        printf("Your desired grade is closer or higher to computed grade.\n");
    }
    else
    {
        printf("Your desired grade is closer or lower to computed grade.\n");
    }
}

void save_to_file(Student *s)
{
    FILE *file_ptr = fopen("grade_report.txt", "w");

    if (file_ptr == NULL)
    {
        printf("Error: Could not create or open file!\n");
        return;
    }

    fprintf(file_ptr, "--- Student Grade Report ---\n");
    fprintf(file_ptr, "Fullname: %s %s\n", s->first_name, s->last_name);
    fprintf(file_ptr, "Program Code: %s\n", s->program_code);
    fprintf(file_ptr, "Age: %d\n", s->age);
    fprintf(file_ptr, "Desired Grade: %.2f\n", s->grade);
    fprintf(file_ptr, "Computed Final Grade: %.2f\n", s->final_grade);

    fclose(file_ptr);

    printf("\nOutput has been saved to 'grade_report.txt'!\n");
}

void print_info()
{
    printf("LEGEND:\n");
    printf("A. Attendance\n");
    printf("B. Recitation\n");
    printf("C. Quiz\n");
    printf("D. Group/Home Work\n");
    printf("Total Percent = 70%%\n");
    printf("E. Midterm/Final Exam = 30%%\n");
    printf("Total Grade = 100%%\n\n");
}

int main()
{
    Student s1;

    char answer[10];
    int repeat = 0;

    float a, b, c, d, e;

    printf("Input your First Name: ");
    scanf("%14s", s1.first_name);

    printf("Input your Last Name: ");
    scanf("%14s", s1.last_name);

    printf("Input your Program Code: ");
    scanf("%9s", s1.program_code);

    printf("Input your Age: ");
    scanf("%d", &s1.age);

    printf("Input your Desired Grade: ");
    scanf("%f", &s1.grade);

    do
    {
        printf("\nInput your grades from 75 to 100.\n\n");

        print_info();

        printf("Input your Attendance: ");
        scanf("%f", &a);

        printf("Input your Recitation: ");
        scanf("%f", &b);

        printf("Input your Quiz: ");
        scanf("%f", &c);

        printf("Input your Group/Home Work: ");
        scanf("%f", &d);

        printf("Input your Final Exam: ");
        scanf("%f", &e);

        float computed_grade = total_grade(a, b, c, d, e);

        output_grade(&s1, computed_grade);

        printf("\nDo you want to compute again? (yes/no): ");
        scanf("%9s", answer);

        if (strcmp(answer, "yes") == 0)
        {
            repeat = 1;
        }
        else
        {
            repeat = 0;
        }

    } while (repeat == 1);

    printf("\nDo you want to save this output to a file? (yes/no): ");
    scanf("%9s", answer);

    if (strcmp(answer, "yes") == 0)
    {
        save_to_file(&s1);
    }

    printf("\nBut the Lord is faithful,\n");
    printf("who shall stablish you,\n");
    printf("and keep you from evil.\n");
    printf("2 Thessalonians 3:3\n");

    printf("\nGod bless, Class!\n");

    return 0;
}

