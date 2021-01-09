#include<stdio.h>
void rotate(int ar[],int n,int d)
{
    int temp,i;
    while (d--)
    {
        temp=ar[0];
        for ( i = 0; i < n-1; i++)
        {
            ar[i]=ar[i+1];
            ar[i+1] = temp;
        }
    }
}
void display(int ar[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",ar[i]);
    }
    
}
int main()
{
    int n,d;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("\nEnter the contents of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);    
    }
    printf("\nArray before rotation: ");
    display(ar,n);
    printf("\nEnter the numbeer of times u wanna rotate: ");
    scanf("%d",&d);
    rotate(ar,n,d);
    printf("\nThe array after rotation: ");
    // for (int i = 0; i < n; i++)
    // {
    //     printf(" %d ",ar[i]);
    // }
    display(ar,n);
}