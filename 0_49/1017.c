#include <stdio.h>
int main ()
{
    int a,b,c,d,e,m,n,o;
    scanf ("%d%d%d%d%d",&a,&b,&c,&d,&e);
    m=a-2*e;
    n=b-2*e;
    o=c-2*e;
    printf("%d",(2*(a*b+b*c+c*a))+8*m*d+8*n*d+8*o*d);
    printf(" %d\n", a*b*c-2*m*n*d-2*m*o*d-2*n*o*d );
    return 0;
}