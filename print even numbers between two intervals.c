#include<stdio.h>
void main()
{
int x,y;
printf("enter the first interval x:\n");
scanf("%d",&x);
printf("enter the second interval y:\n");
scanf("%d",&y);
printf("\n the even numbers:");
for(int i=x;i<y;i++)
if(i%2==0)
{
printf(" \t  %d",i);
}
}
