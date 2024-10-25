// #include<stdio.h>
// void main()
// {
//     int i,marks[5];
//     char *name[5][30];
//     printf("enter name and marks of students\n : ");
//     for(i=0;i<5;i++)
//     {
//     scanf("%s%d",&name[i],&marks[i]);
//     printf("\nstudent names are : %s\nstudents marks are :%d",name[i],marks[i]);
//     }
//     printf("\n\nstudent name: %s\nstudent marks: %d",name[0],marks[0]);
    
// }



// i have done the same question with 2 different source code.


#include<stdio.h>
void main()
{
    char *name[5][30];
    int i, marks[5];
    for(i=0;i<5;i++)
    {
    printf("enter the name of student\n");
    scanf("%s",&name[i]);
    printf("enter marks of %s\n",name[i]);
    scanf("%d",&marks[i]);
    
    }
    for(i=0;i<5;i++)
    printf("\nstudent: %s marks are %d",name[i],marks[i]);



}