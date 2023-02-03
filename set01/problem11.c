#include<stdio.h>
struct complex
{
float real;
float imaginary;
};
typedef struct complex Comp;
Comp input_complex();
Comp add_complex(Comp a, Comp b);
void output(Comp a, Comp b, Comp sum);
int main()
{
Comp a,b,sum;
a=input_complex();
b=input_complex();
sum=add_complex(a,b);
output(a,b,sum);
return 0;
}
Comp input_complex()
{
Comp n;
printf("Enter the real part and the imaginary part:\n");
scanf("%f%f",&n.real,&n.imaginary);
return n;
}
Comp add_complex(Comp a, Comp b)
{
Comp add;
add.real = a.real+b.real;
add.imaginary = a.imaginary+b.imaginary;
return add;
}
void output(Comp a, Comp b, Comp sum)
{ 
printf("The sum of %f+%fi and %f+%fi is %f+%fi\n",a.real, a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
