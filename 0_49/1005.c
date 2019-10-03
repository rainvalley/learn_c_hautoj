#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%-8d %-8d %-8d\n",a,a*a,a*a*a);
    printf("%-8d %-8d %-8d\n",b,b*b,b*b*b);
    printf("%-8d %-8d %-8d",c,c*c,c*c*c);
    return 0;
}