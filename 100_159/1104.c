#include<stdio.h>
#include<math.h>
int FacSum(int n);
int main()
{
   int n,sum;
   scanf("%d",&n);
   sum=FacSum(n);
   printf("%d",sum);
}

int FacSum(int n)
{
    int i,sum;
    sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
