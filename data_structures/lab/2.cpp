#include<stdio.h>
#include"arithmetic.h"
int main()
{
    int a,b;
    printf("Enter the first integer:");
    scanf("%d",&a);
    printf("Enter the second integer:");
    scanf("%d",&b);
    printf("\nADDITION:%d",sum(a,b));
    printf("\nSUBTRACTION:%d",difference(a,b));
    printf("\nPRODUCT:%d",product(a,b));
    printf("\nQUOTIENT:%d",division(a,b));
    return 0;
}