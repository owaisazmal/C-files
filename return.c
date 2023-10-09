#include <stdio.h>

double square1(double x);

int main()
{
   double x = square1(3.14);
   printf("%lf", x);

   return 0;
}

double square1(double x)
{
   double result = x * x;
   return result;
}
