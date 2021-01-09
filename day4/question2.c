#include<stdio.h>
node *delete_beg(node *start)
{
    node *q;
    if (start == NULL)
    {
        printf("\n Empty List");
    }
    q = start;
    start = start->next;
    free(q);
    return start;
}