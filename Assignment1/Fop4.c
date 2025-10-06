#include<stdio.h>
/*/
If the marks obtained by a student in five different subjects are input through the keyboard, find out percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100./*/
    int main(){
        int sub1,sub2,sub3,sub4,sub5,total;
        float p;
        printf("Enter your marks of first subject:");
        scanf("%d",&sub1);
       
        printf("Enter your marks of  sec subject:");
        scanf("%d",&sub2);
       
        printf("Enter your marks of third subject:");
        scanf("%d",&sub3);
        printf("Enter your mark of fourth subject:");
        scanf("%d",&sub4);
        printf("Enter your marks of  firth subject:");
        scanf("%d",&sub5);
        total=sub1+sub2+sub3+sub4+sub5;
        p=(total/500.0)*100;
        printf("total marks=%d \n",total);
        printf("Percentage=%.f",p);
        return 0;


        
    }

         
