#include <stdio.h>

int main() {
// Initialize arrays to store student names and marks
char student_names[5][50];
float student_marks[5];
    
// Loop to input data for 5 students
for (int i = 0; i < 5; i++) 
{
printf("Enter name of student %d: ", i + 1);
scanf("%s", student_names[i]);
printf("Enter marks of %s: ", student_names[i]);
scanf("%f", &student_marks[i]);
}

// Display the information for each student
printf("\nStudent Information:\n");
for (int i = 0; i < 5; i++) 
{
printf("Name: %s, Marks: %.2f\n", student_names[i], student_marks[i]);
}

return 0;
}



