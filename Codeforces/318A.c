#include<stdio.h>

int main(void){
    long long int n, k, tag, count=0, res;
    scanf("%lld %lld", &n, &k);
    (n%2==0)?(tag = n/2):(tag = n/2 + 1);
    while(count<=k){
        if(k<=tag) res = 2*k - 1;
        else if(k>tag) res = (k - tag) * 2;
        count++;
    }
    printf("%lld\n", res);
return 0;
}
