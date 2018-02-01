#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("enter the integer:");
    scanf("%d",&a);
    b=a;
  while(b!=0)
  {
   b=b/10;
   ++c;
  }
  printf("numbers of digits for %d=%d",a,c);
}
