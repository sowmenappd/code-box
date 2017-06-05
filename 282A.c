#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int i, n, x=0;
    char a[100];
    scanf("%d\n", &n);
    for(i=0; i<n; i++)
    {
        gets(a);
        if((a[0]=='+' && a[1]=='+') || (a[1]=='+' && a[2]=='+') ) x++;
        else if((a[0]=='-' && a[1]=='-') || (a[1]=='-' && a[2]=='-')) x--;
    }
    printf("%d\n", x);
    return 0;
}
