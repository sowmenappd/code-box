#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int m, n, a;
    scanf("%d %d", &m, &n);
    if((m*n)%2==0) a = (m*n) / 2;
    else if((m*n)%2==1) a = (m*n - 1) / 2;
    printf("%d\n", a);
    return 0;
}
