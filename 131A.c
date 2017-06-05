#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main(void){
    char str[100];
    int i, l, tru=0;
    scanf("%s", &str);
    l = strlen(str);
    for(i=0; i<l; i++){
        if(isupper(str[i])) w++;
        if(i==0 && islower(str[i])) ;
    }
    if(w==i || ()){
    for(i=0; i<l; i++){
        if(i==0 && islower(str[i])) str[i] = toupper(str[i]);
        if(i!=0 && isupper(str[i])) str[i] = tolower(str[i]);
    }
    }
    else goto end;
    end:
    printf("%s\n", str);
    return 0;
}
