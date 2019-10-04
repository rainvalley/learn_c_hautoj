#include<stdio.h>
int main()
{
    int i,n,num;
    scanf("%d",&num);
    n=0;
    for ( i = 1; i <= num; i++)
    {
        if (i%10!=4&&(i/10)%10!=4&&(i/100)%10!=4)
        {
            n++;
        }
    }
    printf("%d",n);
    return 0;
}