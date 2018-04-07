#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char p[100];
    gets(p);
    if(strstr(p, "0000000") || strstr(p, "1111111")) printf("YES\n");
    else printf("NO\n");

    return 0;
}
