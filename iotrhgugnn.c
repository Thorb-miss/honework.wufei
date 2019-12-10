#include<stdio.h>
#define LEN 10

int main(void)
{
   int a[LEN]={0},i;
   printf("Enter array a:\n");
   for(i =0;i <LEN;i++)
   {
     scanf("%d",&a[i]);

   }
   for(i=LEN-1;i>=0;i--)
   {
   printf("%5d",a[i]);
   }

    return 0;
}
