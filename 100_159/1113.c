#include<stdio.h>
int fib(int k);

int main(void )
{
    int n;
    scanf("%d", &n);
    printf("%d\n递归调用了%d次", fib(n),2*fib(n)-1);
    return 0;
}

int fib(int k)
{
    if(k == 1 || k == 2)
        return 1;
    else
        return fib(k-1) + fib(k-2);
}
