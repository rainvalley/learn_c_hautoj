#include<stdio.h>
int main()
{
    int i,n;
    int min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            printf("%d %d",min,i);
            break;
        }
    }

}