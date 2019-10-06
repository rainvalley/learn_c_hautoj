#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{
    int m,n,i;
    scanf("%d %d",&m,&n);
    for ( i = m; i <=n; i++)
    {
        if (prime(i)==1)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
    
}
int prime(int n)
{
    int i,s;
    //scanf("%d",&n);
    s=(int)sqrt(n);
    if (n==1)
    {
        return 0;
    }
    
    for ( i = 2; i <= s; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}