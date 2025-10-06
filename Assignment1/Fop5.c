/*5-Write a program to print the size of char, float, double and long double data types in C /*/
#include<stdio.h>
int main(){
  
    printf("1. Size of char: %d byte\n", sizeof(char));
   
    printf("2. Size of float: %d bytes\n", sizeof(float));
    
    printf("3. Size of double: %d bytes\n", sizeof(double));
    printf("4. Size of long double: %d bytes\n", sizeof(long double));
    
    return 0;

}
