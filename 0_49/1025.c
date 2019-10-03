#include<stdio.h>
int main()
{
    char a,b,c;
    int max;
    scanf("%c %c %c",&a,&b,&c);
    max=a;
    if (b>max)
    {
        max = b;/* code */
    }
    if (c>max)
    {
        max =c;/* code */
    }
    printf("%c",max);
    return 0;
}