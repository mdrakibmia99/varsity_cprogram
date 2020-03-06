#include<stdio.h>
main()
{
  float number;
  printf("Enter a number:");
  scanf("%f",&number);
  if(number<0){
    printf("%.2f number is negative",number);
  }else if(number>0){
    printf("%.2f number is positive",number);
  }else{
    printf("%.2f number is Zero",number);
  }


}
