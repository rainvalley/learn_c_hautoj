#include<stdio.h>
int main()
{
    char x;
    int i,y;
    double z;
    y=0;
    for ( i = 1;scanf("%c",&x)!=EOF; i++)
    {
        if (x=='A')
        {
            y=y+95;
        }
        else if (x=='B')
        {
            y=y+85;
        }
        else if (x=='C')
        {
            y=y+75;
        }
        else if (x=='D')
        {
            y=y+65;
        }
        else if (x=='E')
        {
            y=y+40;
        }
        
    }
    z=(1.0*y)/i;
    printf("%d",z);
    return z;
}