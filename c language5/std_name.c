#include<stdio.h>
int main()
{
    char std_name[5][20];
    int std_marks[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("enter the name of student :\n");
        scanf("%s",std_name[i]);
        printf("enter marks of student :\n");
        scanf("%d",&std_marks[i]);
    }
    printf("\nstudent information\n");
    for(i=0;i<5;i++)
    {
        printf("name %s  , marks %d\n",std_name[i],std_marks[i]);
    }
    return 0;
}