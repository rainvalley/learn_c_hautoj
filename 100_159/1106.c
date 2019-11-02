#include<stdio.h>
int huiwen(int i);
int main()
{
    int i,m,n;
    scanf("%d%d",&m,&n);
    for ( i = m; i <=n ; i++)
    {
        if (huiwen(i)==1)
        {
            printf("%d ",i);
        }
        
    }
    
}

int huiwen (int i)
{
    int t,p=0;
    t=i;
    while (i!=0)
    {
        p=i%10+p*10;
        i=i/10;
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