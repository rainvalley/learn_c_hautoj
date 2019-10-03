#include<stdio.h>
#include<ctype.h>
int main()
{
    int n;
    char m;
    n=0;
    while (m=getchar(),m!='\n')
    {
        if (isdigit(m))
        {
            n=n+1;
        }
        
    }
    printf("%d",n);
    return 0;
}