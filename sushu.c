
int main(void)
{
    int i,n;
    printf("Enter n;\n");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n % i==0)
         { 
          break;
        }
        }
        
        if(i==n)
        {
            printf("Yes!\n");
        }
        else
        {
            printf("No!\n");
        }

    return 0;
}
