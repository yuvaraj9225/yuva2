#include <stdio.h>

void main()
{
    int base, exponent,power=1;
  
    printf("Enter the base :");
    scanf("%d", &base);
    printf("Enter exponent :");
    scanf("%d", &exponent);
    for(int a=1; a<=exponent; a++)
    {
        power = power * base;
    }

    printf("power for %d^%d=%d",base,exponent,power);
}
