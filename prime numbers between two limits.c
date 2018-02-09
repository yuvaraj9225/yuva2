#include<stdio.h>
void main()
{
int n, num1, num2, k, r;
printf("\n Enter first limit : ");
scanf("%d",&num1);
printf("\n enter the second limit:");
scanf("%d",&num2);
printf("\tPrime Numbers between the given Two Intervals:\t ");
for(n=num1; n<=num2; ++n)
{
r=0;
for(k=2;k<=n/2;k++){
if((n % k) == 0){
 r++;
 break;
}
}
if(r==0)
printf(" %d ", n);
}
                  
}
