#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n, i, marker1=0, marker2=0;
    scanf("%d", &n);
    int rating[n][2];
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &rating[i][0], &rating[i][1]);
        if(rating[i][0]-rating[i][1]!=0) marker1++;
    }
    if(marker1==0){
        for(i=0; i<n; i++)
            if(rating[i][0]<rating[i+1][0]) marker2++;
    }

    if(marker1)printf("rated\n");
    if(marker2>0) printf("unrated\n");
    if(marker2==0) printf("maybe\n");
    return 0;
}
