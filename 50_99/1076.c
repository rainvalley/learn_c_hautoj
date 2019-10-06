#include<stdio.h>
int main()
{
    int x,y,z,n,answer;
    answer = 0;
    scanf("%d",&n);
    for ( x = 0; x <= 9; x++)
    {
        for ( y = 0; y <= 9; y++)
        {
            for ( z = 0; z <= 9; z++)
            {
                if (100*x+10*y+z+100*y+10*z+z==n&&x!=0&&y!=0)
                {
                    printf("%4d%4d%4d\n",x,y,z);
                    answer=1;
                }
                
            }
            
        }
        
    }
    if (answer==0)
    {
        printf("No Answer\n");
    }
    return 0;
    
}