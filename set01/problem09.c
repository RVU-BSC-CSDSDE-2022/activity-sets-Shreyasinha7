#include <math.h>
#include <stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
float input()
{
  float n ,sqrroot;
  printf("enter the number:");
  scanf("%f", &n);
  return(n);
}  
float square_root(float n)
{
  float i=1;
  while(fabs(i*i-n)/2>0.0001)
    {
      i=(i+n/i)/2;
    }
  return i;
}
void output(float n, float sqrroot)
{
  printf("square root of5.2f=%.2f", n,sqrroot);
}
void output(float n ,float sqrroot)
{
  printf("Square root of %.2lf =  %.2lf", n , sqrroot);
}
int main()
{
  int n,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n,sqrroot);
  return(0);
}