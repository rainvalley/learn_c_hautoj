#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
    {
        printf("%d",ch-'a'+1);/* code */
    }
    else
    {
        printf("%d",ch-'A'+1);
    }
    return 0;
}