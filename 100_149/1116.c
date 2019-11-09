#include<stdio.h>
void del(int arr[],int n,int i);
void PrintArr(int arr[],int n);
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&arr[j]);
    }
    scanf("%d",&i);
    del(arr,n,i);
    PrintArr(arr,n);
}
void del(int arr[],int n,int i)
{
    int j;
    for ( j = i; j < n-1; j++)
    {
        arr[j]=arr[j+1];
    }
    
}
void PrintArr(int arr[],int n)
{
    int j;
    for ( j = 0; j < n-1; j++)
    {
        printf("%d ",arr[j]);
    }
    
}