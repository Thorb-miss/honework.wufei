#include<stdio.h>

double isLeapYear(int x);
int main(void)

 {
     int i,flag,count=0;
     for(i=2000;i <=2050;i++)
     {
         flag=isLeapYear(i);
         if(flag==1){
             printf("%5d",i);
             count++;
         }
     }
     printf("%5d",count);
     return 0;
 }
