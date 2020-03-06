#include<stdio.h>
main()
{
    float radius,diameter,circumference,area,pie=3.1416;
    printf("Enter radius:");
    scanf("%f",&radius);
    diameter=2*radius;
    circumference=2*pie*radius;
    area=pie*radius*radius;
    printf("diameter= %.2f\n",diameter);
    printf("circumference= %.2f\n",circumference);
    printf("area= %.2f",area);
}

