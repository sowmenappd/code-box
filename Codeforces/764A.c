#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i, j, k, n, m, z, call[10000], art[10000], x, y, kill=0;
    scanf("%d %d %d", &n, &m, &z);

    for(i=n,j=0; i<=z; i=i+n,j++){
        call[j] = i;
    }
    for(i=m,k=0; i<=z; i=i+m,k++){
        art[k] = i;
    }
    for(x=0; x<j; x++){
        for(y=0; y<k; y++){
            if(call[x]==art[y]) kill++;
        }
    }
    printf("%d\n", kill);
    return 0;
}
