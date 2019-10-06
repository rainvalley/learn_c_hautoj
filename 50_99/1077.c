#include<stdio.h>
int main()
{
    int k;
    char c;
    scanf("%d\n",&k);
    while (scanf("%c",&c)!=EOF)
    {
        if (c>='a'&&c<='z')
        {
            printf("%c",(c-'a'+k)%26+'a');
        }
        else if (c>='A'&&c>='Z')
        {
            printf("%c",(c-'A'+k)%26+'A');
        }
        else
        {
            printf("%c",c);
        }
        
    }
    return 0;
}