#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if (x<-2)
    {
        printf("%d",7-2*x);/* code */
    }
    else
    {
        if (x>=3)
        {
            printf("%d",3*x+4);
        }
        else
        {
            printf("%d",5-abs(3*x+2));
        }
        
    }
    return 0;
}