#include<stdio.h>
main()
{
    int amount,count,nutes;
    printf("Enter amount:");
    scanf("%d",&amount);
    printf("Enter every note value:");
    scanf("%d",&count);

    nutes=amount/count;
    printf("Total notes=%d",nutes);

}
