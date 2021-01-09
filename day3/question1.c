#include <stdio.h>
int main()
{
    int n, pos;
    printf("Enter the size of the array");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements into an array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("\nEnter the position from which u want to delete element");
    scanf("%d", &pos);
    for (int i = 0; i < n; i++)
    {
        if (pos == i)
        {
            pos = i;
            for (int j = pos - 1; j < n; j++)
            {
                ar[j] = ar[j + 1];
            }
            n--;
        }
        else if(pos==n)
        {
            n--;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}