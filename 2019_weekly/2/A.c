#include<stdio.h>
int main()
{
    int i=0,j,k;
    int re=0;
    int t;
    char arr[100];
    while (scanf("%c",&arr[i])!=EOF)
    {
        i++;
    }
    i=i-1;
    for ( j = 0; j <= i; j++)
    {
        for ( k = j+1; k <= i; k++)
        {
            if (arr[j]>arr[k])
            {
                t=arr[j];
                arr[j]=arr[k];
                arr[k]=t;
            }
            
        }
        
    }
    for ( j = 0; j <= i; j++)
    {
        if (arr[j]==arr[j+1])
        {
            re++;
        }
        
    }
    re=i-re;
    if (re%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    
    
}