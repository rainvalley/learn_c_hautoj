#include<stdio.h>
int main()
{
    int i,m,n,a,b,c;//a为负数，b位0，c为正数。
    scanf("%d",&n);
    a=0,b=0,c=0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&m);
        if (m<0)
        {
            a++;/* code */
        }
        else if (m==0)
        {
            b++;/* code */
        }
        else
        {
            c++;
        }
        
    }
    printf("%d %d %d",a,b,c);
    return 0;
}