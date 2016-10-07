#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
char str[50];
char rev[50];
clrscr();
printf("Enter the string:");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
k=i-1;
}
for(j=0;j<=i-1;j++)
{
rev[j]=str[k];
k--;
}
printf("Reversed string:%s",rev);
getch();
}