#include <stdio.h>

void main()
{
    int base, exponent,power=1;
    int a;
    printf("Enter the base :");
    scanf("%d", &base);
    printf("Enter exponent :");
    scanf("%d", &exponent);
    for(a=1; a<=exponent; a++)
    {
        power = power * base;
    }

    printf("power for given number %d for given exponent ^%d=%d",base,exponent,power);
}
