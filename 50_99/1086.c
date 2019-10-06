#include<stdio.h>
int main()
{
    char n;
    char a,b,c;
    char temp;
    while (scanf("%c%c%c\n",&a,&b,&c)!=EOF)
    {
        if (a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if (a>c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        if (b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}