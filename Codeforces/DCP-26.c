#include<stdio.h>
#include<string.h>

int main(void){
    char str[1000];
    int i, n, j, l;
    scanf("%d", &n);
    getchar();
    for(i=0; i<n; i++){
    gets(str);
    l = strlen(str);
        for(j=l-1; j>=0; j--)
            printf("%c", str[j]);
        printf("\n");
    }
    return 0;
}