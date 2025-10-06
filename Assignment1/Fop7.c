/*Write a program to reverse a four digit number  if a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.
/*/

#include<stdio.h>
    int main()
    {int tlt,u,t,h,th;
        printf("Enter your 4 digit no:");
        scanf("%d",&tlt);
        printf("The number you give :%d \n",tlt);
        u=tlt%10;
        t=tlt/10%10;
        h=tlt/100%10;
        th=tlt/1000;
        printf("before reverse=%d%d%d%d",th,h,t,u);
        printf("\nAfter reverse=%d%d%d%d",u,t,h,th);
        printf("\nSum of first and last digit=%d",u+th);
        return 0;
     }

