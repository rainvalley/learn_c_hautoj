#include<stdio.h>
#include<limits.h>
int main()
{
    int a,max;
    max=INT_MIN;
    while (scanf("%d",&a),a>=0)
    {
        if(a>max)
        max=a;
    }
    
    printf("%d",max);
    return 0;
}