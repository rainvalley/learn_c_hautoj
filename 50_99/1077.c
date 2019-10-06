#include<stdio.h>
int main()
{
    int k;
    char c;
    scanf("%d\n",&k);
    while (scanf("%c",&c)!='\n')
    {
        if (c>='a'&&c<='z')
            c=(c-'a'+k)%26+'a');
        else if (c>='A'&&c>='Z')
            c=(c-'A'+k)%26+'A');
        printf("%c",c);
        
    }
    return 0;
}