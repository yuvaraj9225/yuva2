#include <stdio.h>
void main()
{
  int a,b, i, temp, num, rem;
  printf("Enter first interval:");
  scanf("%d",&a);
  printf("Enter the second interval:");
  scanf("%d",&b);
  printf("Armstrong numbers between %d and %d: ", a, b);
  for(i=a+1; i<b; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
         rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
}
 
