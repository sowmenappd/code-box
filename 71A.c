#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int i, j, k, l, n;
    char str[2], word[100];
    scanf("%d", &n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(word);
        l = strlen(word);
        if(l>10){
        for(j=0; j<l; j++)
        {
            if(j==0) str[0] = word[j];
            if(j==l-1)str[1] = word[j];
        }
        k = j - 2;
        printf("%c%d%c\n", str[0], k, str[1]);
        }
        else printf("%s\n", word);
    }
    return 0;
}
