#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    c = (d/1)%10;
    b = (d/10)%10;
    a = (d/100)%10;

    if (d == a*a*a + b*b*b + c*c*c)
    {
        printf("yes"); /* code */
    }
    else
    {
        printf("no");
    }
    return 0;
}