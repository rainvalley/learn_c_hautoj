#include<stdio.h>
struct STU
{
    char num[20];
    char name[30];
    int a;
    int b;
    int c;
    int sum;

};
int main()
{
    int i,n,sum=-1;
    struct STU stu,max;
    max.sum=-1;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s",stu.num);
        scanf("%s",stu.name);
        printf("%s\n",stu.num);
        scanf("%d%d%d",&stu.a,&stu.b,&stu.c);
        stu.sum=stu.a+stu.b+stu.c;
        if (stu.sum>max.sum)
        {
            max=stu;
        }
        
    }
    printf("%s %s %d %d %d\n",max.num,max.name,max.a,max.b,max.c);
    
}