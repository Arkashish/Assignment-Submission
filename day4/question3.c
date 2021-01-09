#include<stdio.h>
node *delete_end(node *start)
{
    node *temp, *temp1;
    if (start->next == NULL)
    {
        return (del_fir(start));
    }
    for (temp = start; temp != NULL; temp = temp->next)
    {
        if ((temp->next)->next == NULL)
            break;
    }
    temp1 = temp->next;
    temp->next = NULL;
    free(temp1);
    return start;
}