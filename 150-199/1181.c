#include<stdio.h>
#include<string.h>
struct Info
{
    char name[20];
    int year;
    int month;
    int day;
};
int main()
{
    struct Info info;
    struct Info min;
    
    int i,n;
    scanf("%d",&n);
    min.day=-1;
    min.month=-1;
    min.year=-1;
    for ( i = 0; i < n; i++)
    {
        scanf("%s",info.name);
        scanf("%d",&info.year);
        scanf("%d",&info.month);
        scanf("%d",&info.day);
        if(info.year>min.year)
        min=info;
        else if(info.year==min.year)
        {
            if(info.month>min.month)
            min=info;
            else if(info.month==min.month)
            {
                if(info.day>min.day)
                min=info;
            }
        }
        
    }
    printf("%s %d-%02d-%02d",min.name,min.year,min.month,min.day);
    
}
