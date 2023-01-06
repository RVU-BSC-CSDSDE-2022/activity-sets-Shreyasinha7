#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n],int sum);
int input_array_size()
{
  int n;
  printf("enter the array size:");
  scanf("%d",&n);
  return(n);
}