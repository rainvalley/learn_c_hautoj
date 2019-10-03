#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    if (a<b)
    {
        t=a;
        a=b;
        b=t;/* code */
    }
    if (a<c)
    {
        t=a;
        a=c;
        c=t;/* code */
    }
    if (b<c)
    {
        t=b;
        b=c;
        c=t;/* code */
    }

    if (a*a==b*b+c*c)
    {
        printf("yes");/* code */
    }
    else
    {
        printf("no");
    }
    return 0;
}