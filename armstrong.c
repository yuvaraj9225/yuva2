#include<stdio.h>  
void main()    
{    
int a,b,sum=0,temp;    
printf("enter the number a:");    
scanf("%d",&a);    
temp=a;    
while(a>0)    
{    
b=a%10;    
sum=sum+(b*b*b);    
a=a/10;    
}    
if(temp==sum)    
printf("the given number is armstrong ");    
else    
printf("the given number is not armstrong");    
}   
