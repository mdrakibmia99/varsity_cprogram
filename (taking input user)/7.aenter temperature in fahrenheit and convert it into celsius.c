#include<stdio.h>
main()
{
float c,f;
printf("Enter farenheit tempareture:");
scanf("%f",&f);
c=((f-32)*5/9);
printf("%.1f fareheit=%.1f celsius ",f,c);

}
