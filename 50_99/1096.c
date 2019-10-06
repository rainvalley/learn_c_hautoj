#include<stdio.h>
int main()
{
    int i,m,n,q;
    
    while (scanf("%d%d",&m,&n)!=EOF)
    {
        q=0;
    for ( i = m; i <=n; i++)
    {
        if (i==((i/100)%10)*((i/100)%10)*((i/100)%10)+((i/10)%10)*((i/10)%10)*((i/10)%10)+(i%10)*(i%10)*(i%10))
        {
            if (q==0)
            {
                printf("%d",i);
                q++;
            }
            else
            {
                printf(" %d",i);
            }
        }
        
    }
    if (q==0)
    {
        printf("no\n");
    }
    else
    {
        printf("\n");
    }
     

    }
    return 0;
    
}