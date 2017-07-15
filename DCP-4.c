#include<stdio.h>

int main(void){
    int timePerDay, total=0, D=0, num, i;
    int coder[100];
    scanf("%d %d", &total, &num);
    for(i=0; i<num; i++){
        scanf("%d", &coder[i]);
        timePerDay += coder[i];
    }
    while(D>=0){
        total -= timePerDay;
        D++;
        if(total < 0) break;
    }
    printf("Project will be completed in %d days\n", D);
    return 0;
}