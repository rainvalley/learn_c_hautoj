#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s,h,z,sum;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d %d %d",&s,&h,&z);
        printf("%d\n",(int)pow(2,(s+h+z)));
    }
    
}