#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);

    if(n=0&&n<60){
        printf("E\n");
    }else if(n<70)
    {
        printf("D\n");
    }else if(n<80)
    {
        printf("C\n");
    }else if(n<90)
    {
        printf("B\n");
    }else if(n>=90)
    {
        printf("A\n");
    }else
     {
         printf("Illegal score\n");
         }

         return 0;