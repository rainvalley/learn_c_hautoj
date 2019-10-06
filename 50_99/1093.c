#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    for ( i = 3; i <= n/2; i=i+2)
    {
        if (prime(i)&&prime(n-i))
        {
            printf("%d %d\n",i,n-i);
        }
        
    }
    return 0;
    
}
int prime(int n)
{
    int i,s;
    if (n==1)
    {
        return 0;
    }
    s=(int)sqrt(n);
    for ( i = 2; i <= s; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}