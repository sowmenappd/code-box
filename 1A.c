#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    long long a, n, m, x, y;
    scanf("%lld %lld %lld", &n, &m, &a)==3);
    x = (n + a - 1) / a;
    y = (m + a - 1) / a;
    printf("%lld\n", x*y);

    return 0;

}
