#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a, b, x, y, p, q;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &a, &b);
    p = abs(a-x);
    q = abs(b-y);
    if(p>q)
    {
        printf("%d\n", (p-q)+q);
    }
    else
    {
        printf("%d\n", (q-p)+p);
    }
    return 0;
}
