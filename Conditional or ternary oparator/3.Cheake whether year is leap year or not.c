#include<stdio.h>
main()
{
    int year;
    printf("Enter your year:");
    scanf("%d",&year);
   (year%4==0)? printf("%d is leap year",year):printf("%d is not leap year",year);
}
