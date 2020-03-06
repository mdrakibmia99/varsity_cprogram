#include<stdio.h>
main()
{
float length,breadth,area,primeter;
printf("Enter length:");
scanf("%f",&length);
printf("Enter breadth:");
scanf("%f",&breadth);
area=length*breadth;
primeter=2*(length+breadth);
printf("Area= %.2f\n",area);
printf("primeter= %.2f",primeter);
}
