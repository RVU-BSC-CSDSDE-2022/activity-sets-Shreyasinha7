#include<stdio.h>
int input();
void compare(int a,int b, int c,int *largest);
int input()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  return n;
}
void compare(int a,int b, int c,int *largest)
{
  *largest=a;
  if(b>*largest)
  {
    *largest=b;
  }
  if(c>*largest)
  {
    *largest=c;
  }
}
void output(int a, int b, int c, int largest)
{
 printf("largest no %d, %d, %d is %d",a,b,c,largest);
}
int main()
{
 int a,b,c,largest;
 a=input();
 b=input();
 c=input();
 compare(a,b,c,&largest);
 output(a,b,c,largest);
 return(0);
}

