#include <stdio.h>
void main()
{
   int n, rev= 0,a;
   printf("Enter the number to check the number is palindrome or not\n");
   scanf("%d",&n);
   a = n;
   while(a!= 0 )
   {
      rev= rev* 10;
      rev= rev+a%10;
       a= a/10;
   }
   if ( n == rev)
      printf("%d is a palindrome number.\n", n);
   else
      printf("%d is not a palindrome number.\n", n);
}
