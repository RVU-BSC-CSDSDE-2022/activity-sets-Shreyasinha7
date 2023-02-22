#include<stdio.h>
void input(float *base, float *height);
void find_area(float base, float height, float *area);
void output(float base, float height, float area);
void input(float *base, float *height)
{
  printf("enter the value of base and height");
  scanf("%f%f",base,height);
}
void find_area(float base, float height, float *area)
{
  *area=0.5*base*height;
  }
void output(float base, float height, float area)
{
  printf("area of both %f and %f is %f",base ,height, area);
}
int main()
{
  float n,base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}