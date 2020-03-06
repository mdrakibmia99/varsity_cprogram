#include<stdio.h>
main()
{
    char c;
    printf("Enter any character :");
    scanf("%c",&c);
    if(c>='a' && c<='z'){

        printf("%c is a  lower character",c);
    }else if(c>='A' && c<='Z'){

     printf("%c is a upercase",c);
    }else{
       printf("%c is a not character",c);
    }
}
