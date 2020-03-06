#include<stdio.h>
main()
{
    float c,m,km;
    printf("Enter length cm:");
    scanf("%f",&c);
    m=c/100;
    km=m/1000;
    printf("meter= %.2f\n",m);
    printf("Kilometer= %.2f",km);
}
