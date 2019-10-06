#include<stdio.h>
double grade(char x);
int main()
{
    int i;
    double a;
    char x;
    i=0;
    a=0.0;
    while ((x=getchar())!='\n')
    {
        a=a+grade(x);
        i++;
    }
    a=(1.0*a)/i;
    printf("%.1lf",a);
    return 0;
    
}
double grade(char x)
{
    double a;
    switch (x)
    {
            case 'A':a=95;break;
            case 'B':a=85;break;
            case 'C':a=75;break;
            case 'D':a=65;break;
            case 'E':a=40;break;
    }
    return a;
}