#include <stdio.h>
#include <math.h>
int main()
{
    double s1,s2;
    char op;
    scanf("%lf %c %lf",&s1,&op,&s2);
    if (fabs(s2)>pow(10,-10))
    {
        switch (op)
        {
        case '+'/* constant-expression */:
        printf("%.2lf",s1+s2);
        break;

        case '-' :
        printf("%.2lf",s1-s2);
        break;

        case '*' :
        printf("%.2lf",s1*s2);
        break;

        case '/' :
        printf("%.2lf",s1/s2);
        break;

        default:
        printf("Wrong input");
            break;
        }
    }
    else
    {
        printf ("Wrong input");
    }
    

    return 0;
}
