#include <stdio.h>
int facsum(int n);
int main()
{
    int m,n,i;
    int sum;
    int signal=0;
    scanf("%d%d",&m,&n);
    for ( i = m; i <=n; i++)
    {
        sum=facsum(i);
        if (facsum(sum)==i&&i<sum)
        {
            printf("%d %d\n",i,sum);
            signal=1;
        }
    }
    if (signal==0)
    {
        printf("No answer");
    }

    return 0;
}

int facsum(int n)
{
    int i,sum;
    sum=0;
    for ( i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }

    }
    return sum;
}
