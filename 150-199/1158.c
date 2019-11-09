#include<stdio.h>
void swap(int *pa,int *pb);
/* 普通排序
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
     if (a<b)
     {
        swap(&a,&b);
     }
     if (c>a)
	 {
	     swap(&a,&c);
	 }
	 if (d>a)
	 {
	     swap(&a,&d);
	 }
	 if (c>b)
	 {
	      swap(&b,&c);
	 }
	 if (d>b)
	 {
	      swap(&b,&d);
	 }
	 if (d>c)
	 {
	      swap(&c,&d);
	 }
	 printf("%d %d %d %d\n",a,b,c,d);
}
*/
//以下是冒泡排序
int main()
{
    int arr[4];
    int i,j;
    int t;
    for ( i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = i+1; j < 4; j++)
        {
            if (arr[j]>arr[i])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
            
        }
           
    }
    for ( i = 0; i < 4; i++)
    {
        printf("%d ",arr[i]);/* code */
    }
    
    
}
void swap(int *pa,int *pb)
{
    int t;
    t=*pa;
    *pa=*pb;
    *pb=t;
}