#include<stdio.h>
#include<math.h>
main()
{
 float a,b,c,value,r1,r2,jotil,jotil1;
 printf("Enter x^2 value:");
 scanf("%f",&a);
  printf("Enter x value:");
 scanf("%f",&b);
 printf("Enter c value:");
 scanf("%f",&c);
 value=b*b-4*a*c;

 if(value==0){
    r1=-b/(2*a);
    printf("Roots are:%.2f",r1);
 }else if(value>0){

 r1=(-b+sqrt(value))/(2*a);
 r2=(-b-sqrt(value))/(2*a);
 printf("Roots are:%.2f and %.2f",r1,r2);
 }else{  ///this else means value<0;;
    r1=-b/(2*a);
    jotil=sqrt(-value);
    jotil1=jotil/(2*a);
    printf("Roots are: %.2f+%.2fi and  %.2f-%.2fi",r1,jotil1,r1,jotil1);



 }

}

