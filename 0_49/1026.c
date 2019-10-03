#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
    {
        printf("lower");/* code */
    }
    else if (ch>='A'&&ch<='Z')
    {
        printf("upper");
        /* code */
    }
    else if (ch>='0'&&ch<='9')
    {
        printf("digit");/* code */
    }
    else
    {
        printf("other");
    }
    return 0;
}