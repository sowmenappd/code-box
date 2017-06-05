#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int i, j, n, cap, max=0;
    scanf("%d", &n);
    int train[n][2];
    cap = 0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &train[i][j]);
            if(j==0)
            {
                cap = cap - train[i][j];
                if(max<cap) max = cap;
            }
            else if(j==1)
            {
                cap = train[i][j] + cap;
                if(max<cap) max = cap;
            }
        }
    }
        printf("%d\n", max);


    return 0;
}
