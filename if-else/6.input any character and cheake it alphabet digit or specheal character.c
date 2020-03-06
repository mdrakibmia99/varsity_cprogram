#include<stdio.h>
main()
{
    char c;
    printf("Enter any character :");
    scanf("%c",&c);
    if((c>='a' && c<='z')||(c>='A' && c<='Z')){

        printf("%c is a character",c);
    }else if(c>='0'){
    printf("This is number");
    }else{
       printf("%c is a special character",c);
    }
}
