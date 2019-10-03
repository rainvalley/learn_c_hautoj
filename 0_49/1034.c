#include<stdio.h> 
 
int main() 
{ 
    double a, b; 
  
    scanf("%lf", &a); 
    
    if(a < 500) 
        b = a; 
    else if(a<1000) 
        b = 0.95 * a; 
    else if(a < 3000) 
        b = 0.9 * a; 
    else if(a < 5000) 
        b = 0.85 * a; 
    else
        b = 0.8 * a; 
        
    printf("%.2f\n", b); 
    return 0; 
} 
