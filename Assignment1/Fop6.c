/*
Write a program to reverse the unit with hundred in a five digit number. (Take user input)/*/

#include<stdio.h>
    int main()
    {
        int total,u,t,h,th,tt;
		printf("Enter your 5 digit no:");
		scanf("%d",&total);
		printf("The number you give :%d \n",total);
        u=total%10;
        t=(total/10)%10;
        h=(total/100)%10;
		th=(total/1000)%10;
		tt=(total/10000);

        printf("before reverse=%d%d%d%d%d",tt,th,h,t,u);
        printf("\nAfter reverse=%d%d%d%d%d",u,t,h,th,tt);
		return 0;
     }

