#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    printf("%d\n", n / 2);
    printf("%d", n%2? 3: 2);
    for(i=n-2; i>=2; i-=2)
    printf(" 2");
    printf("\n");
    return 0;
}
