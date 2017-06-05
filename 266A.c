#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n, i, t=0;
    scanf("%d", &n);
    getchar();
    char str[n];
    gets(str);
    for(i=0; i<n; i++){
        if(str[i]==str[i+1]) t++;
    }
    printf("%d\n", t);
return 0;
}
