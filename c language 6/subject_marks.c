#include<stdio.h>
int main()
{
    float eng,hindi,maths;

    float total;
    printf("enter english marks: ");
    scanf("%f",&eng);
    printf("enter hindi marks :");
    scanf("%f",&hindi);
    printf("enter maths marks : ");
    scanf("%f",&maths);

    total=(eng+hindi+maths)/300*100;

    printf("total marks of all three subjects are : %f\n",total);

    if(total<36)
    printf("fail not promoted to next semester !");
    else if(total>=75)
    printf("excellent !");
    else if(total>=60)
    printf("first division !");
    else if(total>=48)
    printf("second division !");
    else if(total==36)
    printf("third division !");
    else 
    printf("shivay ka demo !");



    return 0;











    

}    