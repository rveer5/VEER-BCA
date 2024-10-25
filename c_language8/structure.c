#include<stdio.h>
int main()
{
    struct student{
        int rollno;
        char name[10];
        float marks;

    };

    struct student s1={1,"shivay",97.};
    struct student s2={2,"veer",98};
    struct student s3;

    printf(" %d",s2.rollno);                         //printing individual element 

    if(s1.marks>s2.marks)                            //comparing individual element . we can compare only individual elements
    printf("\nshivay don");
    else 
    printf("\nveer don");
    printf("\n");

    printf("%d    %s     %f",s1.rollno,s1.name,s1.marks);        //printing full information 
    printf("\nenter information for s3 :\n");
    scanf("%d%s%f",&s3.rollno,&s3.name,&s3.marks);               //taking input from user 
    printf("%d     %s      %f",s3.rollno,s3.name,s3.marks);



    return 0;


}