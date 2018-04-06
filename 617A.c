#include<stdio.h>
#include<stdlib.h>

int main(void){
   long int x, a, b, c, d, e, f, g, h ,i, count;
   scanf("%ld", &x);
   a = x / 5;
   b = x % 5;
   count = a;
   c = b / 4;
   d = b % 4;
   count += c;
   e = d / 3;
   f = d % 3;
   count += e;
   g = f / 2;
   h = f % 2;
   count += g;
   i = h / 1;
   count += i;
   printf("%ld\n", count);
   return 0;
}
