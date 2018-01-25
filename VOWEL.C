#include<stdio.h>
#include<conio.h>

void main()
{
char cha,a,e,i,o,u,A,E,I,O,U;
printf("enter the character:");
scanf("%c",&cha);
if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'||cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U')
printf("the given character is vowel");
else
printf("the given character is consonant");
}
