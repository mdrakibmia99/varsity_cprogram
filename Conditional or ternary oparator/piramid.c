#include<stdio.h>
main()
{

int row,col,i,space;
printf("Enter row:");
scanf("%d",&row);



   for(i=1;i<=row;i++){
        for(space=1;space<=(row-i);space++){ printf(" ");}


    for(col=1;col<=2*i-1;col++){ printf("*");}


    printf("\n");

}

   for(i=row;i>=1;i--){
        for(space=1;space<=(row-i);space++){ printf(" ");}


    for(col=1;col<=2*i-1;col++){ printf("*");}


    printf("\n");

}


}
