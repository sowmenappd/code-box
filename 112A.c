#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    int i, count, x_num, y_num;
    char x, y, str1[100], str2[100];

    gets(str1);
    getchar();
    gets(str2);
    x_num=0;
    y_num=0;
    for(i=0; str1[i]; i++)
    {
        x = tolower(str1[i]);
        x_num = x_num + x;
    }
    for(i=0; str2[i]; i++){
        y = tolower(str2[i]);
        y_num = y_num + y;
    }

    if(x == y) count = 0;
    else
    {
        if (x<y)
            count = -1;

        else if(x>y)
            count = 1;
    }


    printf("%d\n", count);
    return 0;
}




