#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,m,x;//n为输入数字，m为根号n,x则代表素数及合数真假性。
    scanf("%d",&n);
    m=(int)sqrt(n);
    x=0;
    for ( i = 2; i <= m; i++)
    {
        if (n%i==0)
        {
            x=1;
            break;
        }
        
    }
    if (x==1 || n==1)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
    return 0; 
}