#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter three number; ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
         printf("A is largest");
        else
        printf("C is largest");
    
    }   
    else
    {
    printf("C is largest");
    }
return 0;
}