#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
char c,d;
clrscr();
scanf("%c%c",&c,&d);
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{
printf("%c",c);
}
for(i=0;i<b;i++)
{
printf("%c",d);
}
getch();
}
