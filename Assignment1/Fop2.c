#include<stdio.h>


/*3-Write a program to find unit, ten, hundred, thousand, and ten thousands in a five digit number. Also calculate sum of the five digits.	/*/
	int main(){
        int total,u,t,h,th,tt,sum;
		printf("Enter your 5 digit no:");
		scanf("%d",&total);
		printf("The number you give :%d \n",total);
        u=total%10;
        t=(total/10)%10;
        h=(total/100)%10;
		th=(total/1000)%10;
		tt=(total/10000);
		sum=u+t+h+th+tt;

        printf("Unit=%d , Ten=%d , Hundreds=%d ,thousands=%d ,Ten Thounsand=%d",u,t,h,th,tt);
		printf("\nSum of total no=%d",sum);
		return 0;
    }

