#include<stdio.h>
 
int main()
{
    int i, n;
    int preNum, curNum, temp;
 
    scanf("%d", &n);
    preNum = curNum = 1;
 
    for(i = 3; i <= n; i++)
    {
        temp = curNum;
        curNum = curNum + preNum;
        preNum = temp;
    }
 
    printf("%d\n", curNum);
    return 0;
}