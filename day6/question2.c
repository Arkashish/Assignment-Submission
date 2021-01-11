#include<stdio.h>
int main()
{
    int n;
    printf("\nntr the number: ");
    scanf("%d",&n);
    int temp = 0;
    temp = n;
    while (n>0)
    {
        if(n%10 == 0)
        n/=10;
    }
    int temp1 = n;
    int c=0;
    while((n%10)>0)
    {
        if((n%10)==1)
        {
            c++;
            n/=10;
        }
    }
    if(c==1)
    printf("%d",temp);
    else
    printf("NONE");
    
}