#include<stdio.h>
#include<conio.h>
void main
{
clrscr();
int num1,num2,res;
char op;
printf("Enter num1");
scanf("%d",&num1);
printf("Enter num2");
scanf("%d",&num2);
printf("Enter operator");
scanf("%c",&op);
if(op=="+")
res=add(num1,num2);
else if(op=="-")
res=sub(num1,num2);
printf("result=%d",res);

}
