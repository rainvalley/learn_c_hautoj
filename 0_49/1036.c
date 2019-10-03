#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
   switch (b)
        {
        case 4/* constant-expression */:
        case 6:
        case 9:
        case 11:
        printf("30");
            /* code */
            break;
        case 2: 
        if (a%400 == 0 || ((a%4==0)&&(a%100!=0)))
        {
            /* code */printf("29");
        }
        else
        {
            printf("28");
        }
        break;
        default:
        printf("31");
            break;
        }
   return 0; 
}