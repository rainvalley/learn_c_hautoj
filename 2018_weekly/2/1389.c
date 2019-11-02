#include<stdio.h>
#include<math.h>
int main()
{
    int min1,min2;
    int xa,ya,xb,yb;
    scanf("%d %d\n%d %d",&xa,&ya,&xb,&yb);
    min1=abs(xa)+abs(ya)+abs(xa - xb) + abs(ya - yb);
    min2=abs(xb)+abs(yb)+abs(xa - xb) + abs(ya - yb);
    if (min1<min2)
    {
        printf("%d",min1);
    }
    else
    {
        printf("%d",min2);
    }
    
    
}