#include<stdio.h>
main()
{
    int week;
	printf("Enter week number 1 to 7:");
    scanf("%d",&week);
    if(week==1){
    	printf("Saturday");
	}else if(week==2){
    	printf("Sunday");
	}else if(week==3){
    	printf("Monday");
	}else if(week==4){
    	printf("Tuesday");
	}else if(week==5){
    	printf("Wednesday");
	}else if(week==6){
    	printf("Thusday");
	}else if(week==7){
    	printf("Friday");
	}else{
		printf("Wrong input!!!!!");
	}
}
