#include <stdio.h>
int main ()
{
    int a,b,c,d,e,f;
    scanf("%d %d",&a,&b);
    e=a;f=b;
    while(c=a%b,c!=0)
    {
        a=b;
        b=c;
    }
    d=b;
    printf("%d %d",d,e/d*f);
    return 0;
}