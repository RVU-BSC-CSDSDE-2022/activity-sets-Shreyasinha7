#include <stdio.h>

int add(int a, int b) {
   int result = a + b;
   return result;
}

int main() 
{
   int a,b,sum;

   printf("Enter two numbers: ");
   scanf("%d%d", &a, &b);

   // Call the add function
   sum = add(a,b);

   printf("the sum of %d and %d is %d" ,a,b,sum);   
  //we can write "%d + %d = %d" ,a,b,sum//
   return 0;
}
