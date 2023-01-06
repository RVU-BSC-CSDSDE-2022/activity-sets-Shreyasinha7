#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n],int sum);
void output(int n, int a[n],int sum);
int input_array_size()
{
  int n;
  printf("enter the array size:");
  scanf("%d",&n);
  return(n);
}
void input_array(int n, int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);  
  }
}
int sum_n_array(int n, int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
  return(sum);
}
void output(int n, int a[n],int sum)
{
  for (int i=0; i<n-1;i++){
    printf("%d")
  }
}