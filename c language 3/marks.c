#include<stdio.h>
void main()
{
    int i;
    int marks[5];
    int sum=0,avg;
    printf("enter the marks of 5 students  :\n");
    for(i=0;i<5;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<5;i++)
    sum=sum+marks[i];
    avg=sum/5;
    printf("sum of marks is :%d\n",sum);
    printf("average of marks is :%d\n",avg);
    // to access any particular value .We use index 
    printf("marks of student with index 2 is :%d\n",marks[2]);

}