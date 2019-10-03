#include <stdio.h>
int main()
{
    float a,b;//a为美元，b为人民币。
    scanf("%f",&a);
    b = 6.5573 * a;
    printf("%.2f",b);
    return 0;
}