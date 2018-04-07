#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int i, j, count=0, num=0, one=0, two=0, three=0, l;
    char str1[100], str2[100];
    scanf("%s", &str1);
    l = strlen(str1);
    for(i=0; i<l; i++)
    {
        if(str1[i]=='1') one++;
        else if(str1[i]=='2') two++;
        else if(str1[i]=='3') three++;
    }
    num = one + two + three;
    for(i=0; i<l; i++)
    {
        while(one!=0)
        {
            str2[i]='1';
            one--;
            goto end;
        }
        while(two!=0)
        {
            str2[i]='2';
            two--;
            goto end;
        }
        while(three!=0)
        {
            str2[i]='3';
            three--;
            goto end;
        }
end:
        ;
    }
    for(i=0; i<num; i++){
        printf("%c", str2[i]);
        if(i==num-1) break;
        putchar('+');
    }

    return 0;
}
