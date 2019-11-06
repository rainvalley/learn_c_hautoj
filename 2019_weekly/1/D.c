#include<stdio.h>
int main()
{
    int i,n,m,l,r,w,x,j;
    scanf("%d%d",&n,&m);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d%d%d",&l,&r,&w);
        for ( j = l; j <= r; j++)
        {
            arr[j]=arr[j]+w;
        }
        
    }
    scanf("%d",&x);
    printf("%d",arr[x-1]);
}