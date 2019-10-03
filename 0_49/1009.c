#include <stdio.h>
int main()
{
    int math,eng,com;
    float ave;
    scanf("%d %d %d",&math,&eng,&com);
    ave = (math+eng+com)/3.0;
    printf("%.2f",ave);
    return 0;
}