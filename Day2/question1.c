#include<stdio.h>
int main()
{
    int n;
    printf("ntr the value of n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j<i)
            printf("%d*",(i+1));
            else
            printf("%d",(i+1));
        }
        printf("\n");
    }  
}