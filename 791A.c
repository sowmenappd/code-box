#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, b, count = 1;
    scanf("%d %d", &a, &b);

    if(1<=a,b<=10 && a<=b){
       while(a<b){
        a = a * 3;
        b = b * 2;
        count++;

        if(a>=b)
            break;
        }
    }
    printf("\n%d", count);
    return 0;

}
