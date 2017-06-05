#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[100];
    int i, count=0;
    gets(str);
    for(i=0; i<100; i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
            count++;
    }
    if(count>0) printf("YES\n");
    else if(count==0) printf("NO\n");
    count=0;
    return 0;
}
