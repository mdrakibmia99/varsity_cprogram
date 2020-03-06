#include<stdio.h>
main()
{
   int a,b,c,sum1,sum2,sum3;
    printf("Enter 3 BASE NUMBER :\n");
    scanf("%d %d %d",&a,&b,&c);
    sum1=a+b;
    sum2=b+c;
    sum3=a+c;

if(a>b && a>c){
        if(sum2>a){
        printf("VAlid triangle");
    }else{printf("not valid triangle");}
    }else if(b>a && b>c){

      if(sum3>b){
       printf("VAlid triangle");
    }else{printf("not valid triangle");}

    }else if(c>a && c>a){

          if(sum1>c){
        printf("VAlid triangle");
    }else{printf("not valid triangle");}

    }else if(a==b || b==c || c==a || a==b==c){
        printf("VAlid triangle");
    }else{printf(" wrong input!!!!!");}


return 0;
}
