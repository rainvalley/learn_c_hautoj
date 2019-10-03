#include <stdio.h>
#include <math.h>
int main()
{
    double deposit,all;
    int n;
    scanf("%d %lf",&n,&deposit);
    all = deposit * (pow (1.0225,n));
    printf ("%.6lf",all);
    return 0;
}