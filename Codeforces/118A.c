#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char str[100], str1[100];
    int i, j, l;
    gets(str);
    j = strlen(str);
    for(i=0; i<j; i++)
    {
        str[i] = tolower(str[i]);
    }
    for(i=0,l=0; i<j; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y') ;
        else{
            str1[l] = str[i];
            l++;
        }
    }
    for(i=0; i<l; i++){
        printf(".%c", str1[i]);
    }
    printf("\n");
    return 0;
}
