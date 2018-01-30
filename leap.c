
#include<stdio.h>
void main()
{
    int a;
    printf("enter the year:");
    scanf("%d",&a);
    if(a%2==0&&a%4==0&&a%100==0)
    printf("the given year is leap");
    else
    printf("the given year is not leap");
    
}
