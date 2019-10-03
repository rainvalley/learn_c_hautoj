#include<stdio.h>
#include<ctype.h>
int main()
{
    int letter,digit,other;
    digit=letter=other=0;
    char x;
    while (x=getchar(),x!='\n')
    {
        if (isdigit(x))
        {
            digit++;
        }
        else if (isalpha(x))
        {
            letter++;      
        }
        else
        {
            other++;
        }
        
        
    }
    printf("letter:%d\ndigit:%d\nother:%d",letter,digit,other);
    return 0; 
}