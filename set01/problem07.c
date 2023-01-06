#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int input()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  return n;
}
int sum_n_nos( int n)
{
  int sum=0,i;
  i=0;
  while(i<=n)
    {
      i++;
      sum=sum+i;
    }
  return(sum);
}
void output(int n, int sum)
{
  printf("the sum of first %d natural numbers is %d",n,sum);
}
int main()
{
  int n,i,sum;
  n=input();
  sum=sum_n_nos(n);
  output(n,sum);
  return(0);
}