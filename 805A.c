#include<stdio.h>
#include<stdlib.h>

int num[];

int main(void)
{
    int l, r;
    scanf("%d %d", &l, &r);
    if(l!=r) printf("%d ", 2);
    if(l==r && (l-r)%2!=0) printf("%d ", l);
    return 0;
}
