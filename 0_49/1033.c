#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a>=90)
    {
        printf("A");/* code */
    }
    if (a>=80&&a<=89)
    {
        printf("B");/* code */
    }
    if (a>=70&&a<=79)
    {
        printf("C");   
    }
    
    if (a>=60&&a<=69)
    {
       printf("D"); 
    }
    if (a<60)
    {
        printf("E");
    }
    
    return 0;
}