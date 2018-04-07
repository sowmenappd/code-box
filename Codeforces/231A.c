#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n, i, a, b, c, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if((a+b+c)>=2) count++;
    }
    printf("%d\n", count);

    return 0;
}
