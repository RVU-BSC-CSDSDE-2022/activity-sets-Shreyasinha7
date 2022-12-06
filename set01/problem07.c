#include <stdio.h>
void add(int x, int y, int *sum);
int main()
{
      int x=8,y=9, sum=0;
      sum=x+y;
      add(x, y, &sum);
      printf("sum is %d", sum);
      return 0;
}
   void  add(int x, int y, int *sum)
   {
         *sum=x+y;
    }