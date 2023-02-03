#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n , int result);
int input_number()
{
int n;
printf("enter the number:");
scanf("%d",&n);
return n;
}
int is_composite(int n)
{
int i, result=0,var;
for(i=0;i<=n;i++)
{
if((n%i)==0)
{
var++;
}
if(var>2)
{
result=1;
}
else
{
result=1;
}
}
return result;
}
void output(int n, int result)
{
int var;
if(result==1)
printf("it is composite number\n");
else if(result==2)
printf("it is not composite number\n");
}
int main()
{
int n, result;
n=input_number();
result=is_composite(n);
output(n, result);
return (0);
}
