#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    char cha;
    printf("enter the parameter cha :");
    scanf("%c",&cha);
    if(cha>='a'&&cha<='z'||cha>='A'&&cha<='Z')
    printf("the given parameter is alphabet");
    else
    printf("the give parameter is not an alphabet");
}
