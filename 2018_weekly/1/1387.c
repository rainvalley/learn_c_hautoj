#include<stdio.h>
int sum(int n);
int huiwen(int i);
int main()
{
    int i,j,n,d;
    int find;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        find = 0;
        scanf("%d",&d);
        printf("Test%d:\n",i);
        for ( j = 10000; j <= 999999; j++)
        {
            if (sum(j)==d&&huiwen(j)==1)
            {
                printf("%d\n",j);
                find = 1;
            }
            
        }
        if (find==0)
        {
            printf("нч");
        }
        
        
    }
    
}

int sum(int n)
{
    int p=0;
    while (n!=0)
    {
        p=n%10+p;
        n=n/10;
    }
    return p;
    
}
int huiwen(int n)
{   
    int t,p;
    p=0;
    t=n;
    while (n!=0)
    {
        p=n%10+p*10;
        n=n/10;
    }
    if (p==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    

}