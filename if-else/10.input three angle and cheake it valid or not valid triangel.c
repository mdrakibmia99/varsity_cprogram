#include<stdio.h>
main()
{
   int a,b,c,total;
    printf("Enter 3 angle value :");
    scanf("%d %d %d",&a,&b,&c);
    total=a+b+c;
    if(total==180){
        printf("Triangle");
    }else{

     printf("not valid triangle");
    }

}
