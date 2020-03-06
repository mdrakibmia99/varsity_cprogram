#include<stdio.h>
main()
{
   int a,b,c;
    printf("Enter 3 angle value :");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b) && (b==c) && (c==a)){
      printf("Equilateral Triangle");
    }else if((a!=b) && (b!=c) && (c!=a)){
      printf("scalene Triangle");
    }else{
    printf("Isosceles Triangle");

    }
}

