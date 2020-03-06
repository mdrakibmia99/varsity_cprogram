#include<stdio.h>
main()
{

    int a,b,c;
    printf("enter 3 number");
    scanf("%d %d %d",&a,&b,&c);
    (a>b && a>c)? printf("%d is big number",a):printf("");
    (b>a && b>c)? printf("%d is big number",b):printf("");
    (c>a && c>b)? printf("%d is big number\n",c):printf("");

    (a<b && a<c)? printf("%d is low number",a):printf("");
    (b<a && b<c)? printf("%d is low number",b):printf("");
    (c<a && c<b)? printf("%d is low number",c):printf("");











}
