#include<stdio.h>
/*1-Write a program to interchange values of two operands a and b.
2-Write a program to swap numbers. (Without using the temp variables. Use Arithmetic Operators)/*/
	int main(){
		int a,b;
		printf("Enter your first no:");
		scanf("%d",&a);
		printf("Enter your sec no:");
		scanf("%d",&b);
		printf("Value before swapping and interchange a=%d and b=%d\n",a,b);

		a=a+b;
		b=a-b;
		a=a-b;


		printf("Value after swapping and interchange a=%d and b=%d",a,b);
		return 0;
	}

