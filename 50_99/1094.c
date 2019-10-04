#include<stdio.h>
int vowel(char ch);
int main()
{
    int i;
    char ch;
    i=0;
    while ((ch=getchar())!='\n')
    {
        if (vowel(ch)==1)
        {
            i++;
        }
        
    }
    printf("%d",i);
    return 0;
}
int vowel(char ch)
{
    //while (scanf("%c",&ch)!='\n')
    if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}