#include<stdio.h>
int find(int arr[],int n,int x);
void del(int arr[],int n,int x);
void PrintArr(int arr[],int n);
int main()
{
    int i,j,n,x;
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    if (find(arr,n,x)==-1)
    {
        printf("Not Found");
    }
    else
    {
        del(arr,n,x);
        PrintArr(arr,n);
    }
    
    
}
int find(int arr[],int n,int x)
{
    int i,ans;
    ans=-1;
    for ( i = 0; i < n; i++)
    {
        if (x==arr[i])
        {
            ans=1;
            break;
        }
        
    }
    return ans;
}
void del(int arr[],int n,int x)
{
    int i,j;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            break;
        }
        
    }
    for ( j = i; j < n; j++)
    {
        arr[j]=arr[j+1];
    }
    
    
}
void PrintArr(int arr[],int n)
{
    int j;
    for ( j = 0; j < n-1; j++)
    {
        printf("%4d",arr[j]);
    }
    
}