#include<stdio.h>
int main()
{
    char a[3][3];
    int i,j;
    int out;
    out=1;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%c",&a[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        if(a[i][0]==a[i][1]&&a[i][0]==a[i][2]&&a[i][0]=='O')
        out=0;
    }
    for ( j = 0; j < 3; j++)
    {
        if (a[0][j]==a[1][j]&&a[0][j]==a[2][j]&&a[0][j]=='O')
        {
            out=0;
        }
        
    }
    if (a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]=='O')
    {
        out=0;
    }
    if (a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[1][1]=='O')
    {
        out=0;
    }
    
    if (out==0)
    {
        printf("CXKNB");
    }
    else
    {
        printf("AWNB");
    }
    
    
    
}