#include <stdio.h>
int main()
{
    int x,y,z,min;
    scanf ("%d %d %d",&x,&y,&z);
    if (x>y)
    {
        min=x;
        x=y;
        y=min; /* code */
    }
    if (x>z)
    {
        min=x;
        z=x;
        x=min;/* code */
    }
    if (y>z)
    {
        min=y;
        y=z;
        z=min;/* code */
    }
   printf("%d %d %d",z,y,x);
   return 0; 
}