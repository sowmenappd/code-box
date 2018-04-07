#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n, max=0, tax[100], i, j, t, s=0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &tax[i]);
        if(max<=tax[i]) max = tax[i];
    }
    for(i=0; i<n; i++){
        t = max - tax[i];
        s = s + t;
    }
    printf("%d\n", s);

    return 0;
}
