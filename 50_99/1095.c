#include<stdio.h>
int HmsToS(int h, int m, int s);  
void PrintTime(int s);
int main()
{
    int h0,m0,s0,h1,m1,s1;
    int hmstos,hmstos0,hmstos1;
    while (scanf("%d:%d:%d",&h0,&m0,&s0)!=EOF&&scanf("%d:%d:%d",&h1,&m1,&s1)!=EOF)
    {
        hmstos0=HmsToS(h0,m0,s0);
        hmstos1=HmsToS(h1,m1,s1);
        hmstos=hmstos1-hmstos0;
        PrintTime(hmstos);
    }
    return 0;
}
int HmsToS(int h, int m, int s)
{
    int hmstos;
    hmstos=s+m*60+h*3600;
    return hmstos;
}
void PrintTime(int s)
{
    int h0,m0,s0;
    h0=s/3600;
    m0=(s-3600*h0)/60;
    s0=s-3600*h0-60*m0;
    printf("%02d:%02d:%02d\n",h0,m0,s0);
}