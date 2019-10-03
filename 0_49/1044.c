#include<stdio.h>
int main()
{
    int i,n,b,c;//b is everyone's grade,c is one does badly.
    double a;
    c=0;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b);
        if (b<60)
        {
            c++;/* code */
        }
        
    }
    a=(1.0*c)/n;
    printf("%.2lf",a);
    return 0;
}