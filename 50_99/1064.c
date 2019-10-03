#include<stdio.h>
int main()
{
    char x;
    while (x!='@')
    {
        scanf("%c",&x);
        if(x>='A'&&x<'Z')
        {
            x=x+32;
            x=x+1;
            printf("%c",x);
        }
        else if (x>='a'&&x<'z')
        {
            x=x+1;
            printf("%c",x);
        }
        else if (x=='Z' || x=='z')
        {
            printf("a");
        }
        
        else if (x!='@')
        {
            printf("%c",x);/* code */
        }
        
    }
    return 0;
    
}