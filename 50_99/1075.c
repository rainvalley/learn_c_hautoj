#include<stdio.h>
int main()
{
    int a,b,c;//男人 女人 小孩
    int answer,n,cost;
    answer=0;
    scanf("%d%d",&n,&cost);
    for ( a = 0; a <= cost/3; a++)
    {
        for ( b = 0; b <= cost/2; b++)
        {   
            c=n-a-b;
            if (3*a+2*b+c==cost)
            {
                printf("%d %d %d\n",a,b,c);
                answer=1;
            }
        }
        
    }
    if (answer==0)
    {
        printf("No answer\n");
    }
    return 0;
    
}