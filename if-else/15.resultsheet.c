#include<stdio.h>
main()
{
    float num1,num2,num3,num4,num5,total,percentage;
    printf("Enter num1 number:");
    scanf("%f",&num1);
     printf("Enter num2 number:");
    scanf("%f",&num2);
     printf("Enter num3 number:");
    scanf("%f",&num3);
     printf("Enter num4 number:");
    scanf("%f",&num4);
     printf("Enter num5 number:");
    scanf("%f",&num5);
    total=num1+num2+num3+num4+num5;
    percentage=(total/500)*100;
    printf("percentage= %.0f\n",percentage);

    if(percentage>=80 && percentage<=100 ){
        printf("Grade:A");
    }else if(percentage>=70 && percentage<80){

     printf("Grade:B");
    }else if(percentage>=60 && percentage<70){

     printf("Grade:C");
    }else if(percentage>=50 && percentage<60 ){

     printf("Grade:D");
    }else if(percentage>=40 && percentage<50 ){

     printf("Grade:E");
    }else if(percentage<40 && percentage>0){

     printf("Grade:F");
    }else{
    printf("your number type wrong");
    }





}
