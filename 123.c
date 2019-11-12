#include<stdio.h>

int main(void)
{
    int n,multiply=1;
    int i;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        multiply=multiply*i;
    }

    printf("Multiply is %d\n",multiply);
    return 0;
}