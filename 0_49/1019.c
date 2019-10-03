#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<30)
    {
        printf("%.2lf",50.00*a);
    }
    else
    {
        printf("%.2lf",48.00*a);
    }
    
    return 0; 
}