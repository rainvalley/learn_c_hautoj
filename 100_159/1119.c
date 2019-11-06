#include<stdio.h>
void sort(int arr[],int n);
void PrintArr(int arr[],int n);
int main()
{
    int i,n;
    int arr[10];
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    PrintArr(arr,n);
    return 0;
}

void sort(int arr[],int n)
{
    int i,j,t;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            
        }
        
    }
    
}
void PrintArr(int arr[],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}