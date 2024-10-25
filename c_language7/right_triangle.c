#include<stdio.h>
int main()
{

    //In a right-angled triangle, the square of the length of the hypotenuse (the side opposite the right angle)
    // is equal to the sum of the squares of the lengths of the other two sides.

    //that means c_square=a_square + b_square
    int side1,side2,side3,a,b,c;
    printf("enter the sides of triangle : ");
    scanf("%d%d%d",&side1,&side2,&side3);

    a=side1*side1;
    b=side2*side2;
    c=side3*side3;

    if(a+b==c||a+c==b||b+c==a)
    printf("it ia a right angle triangle .");
    else
    printf("not a right angle triangle .");


    return 0;

}