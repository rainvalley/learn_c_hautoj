#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,j,n,d;
    int x,y;//x---*,y---#;
    char c;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("\n%c",&c);
        if (islower(c))
        {
            d=c-'a'+1;
        }
        else
        {
             d=c-'A'+1;
        }
        x=d%5;
        y=d/5;        
        for ( j = 0; j < y; j++)
        {
            printf("#");
        }
        for ( j = 0; j < x; j++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
}