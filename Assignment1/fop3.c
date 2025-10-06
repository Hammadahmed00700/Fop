/*The radius of a circle is input through the keyboard. Write a program to calculate the area & circumference of the circle./*/

#include<stdio.h>

int main(){
    float r,a,c;
   
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    a=3.14*r*r;
    c=2*3.14*r;
   
    printf("Area of circle=%.2f \n",a);
    printf("Circumference of circle=%.2f",c);
    return 0;

}