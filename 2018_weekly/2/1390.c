#include<stdio.h>
#include<math.h>
int judge(int n);
int main()
{
    int i,n;
    int a,b;
    scanf("%d",&n);
    a=0;b=0;
    for ( i = 1; i <= n; i++)
    {
        if (i%10==1||i%10==3||i%10==7||i%10==9)
        {
            a++;
            if (judge(i)==1)
            {
                b++;
            }
            
        }
        
    }
    printf("%d %d",a,b);
    
}

int judge(int n)
{
    int i,find;
    find==0;
        for ( i = 2; i <= (int)sqrt(n); i++)
        {
            if (n%i==0)
            {
                return 0;
                break;
            }
        
        }
    if (find==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
    
}