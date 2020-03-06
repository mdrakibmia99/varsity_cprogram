#include<stdio.h>
main()
{
   int month;
   printf("\nEnter month number 1 to 12:");
   scanf("%d",&month);
   if(month==1){
    printf("This is January month.it has 31 days");
   }else if(month==2){
    printf("This is February month.it has 28 days");
   }else if(month==3){
    printf("This is March month.it has 31 days");
   }else if(month==4){
    printf("This is April month.it has 30 days");
   }else if(month==5){
    printf("This is May month.it has 31 days");
   }else if(month==6){
    printf("This is June month.it has 30 days");
   }else if(month==7){
    printf("This is July month.it has 31 days");
   }else if(month==8){
    printf("This is August month.it has 31 days");
   }else if(month==9){
    printf("This is September month.it has 30 days");
   }else if(month==10){
    printf("This is October month.it has 31 days");
   }else if(month==11){
    printf("This is November month.it has 30 days");
   }else if(month==12){
    printf("This is December month.it has 31 days");
   }else{

   printf("Wrong input !!!!!!!!");
   }


}

