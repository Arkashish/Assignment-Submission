#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node
{
    int val;
    struct node *next;
};
typedef struct node node;
node *front= NULL, *rear = NULL;
node *queue,*delnode;
int size, n=0;
int isempty()
{
    if (rear == NULL)
        return 1;
    else
        return 0;
}
void enqueue(int element)
{
    queue = (node *)malloc(sizeof(node));
    queue->val = element;
    queue->next = NULL;
    if (isempty())
    {
       front = rear = queue;
       rear->next = front;
    }
    else
    {
        rear->next = queue;
        rear = queue;
        rear->next = front;
    }
}
int dequeue()
{
   
    if (front == rear)
    {
        front = rear = NULL;
        free(delnode);        
    }
    else
    {
        delnode = front;
        int val = delnode->val;
        front = front->next;
        rear->next = front;
        free(delnode);
        return val;
    }
}
void display()
{
    if (isempty())
        printf("\nEMPTY\n");
    else
    {
        node *q;
        q = front;
        printf("Content of List is :\n");
        while(q->next!=front)
        {
            printf("%d",q->val);
            q=q->next;
        }
        printf("%d",q->val);
        printf("\n");
    }
}
int main()
{
    int ch, n1,n2;
    while (1)
    {
        printf("\nEnter: \n1.Insertion at rear enqueue \n2.Deletion from front dequeue \n3.Display \n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
                printf("\nEnter element:");
                scanf("%d", &n1);
                enqueue(n1);
                break;
        case 2:
            if (isempty())
            {
                printf("Queue empty");
            }
            else
            {
                int temp = dequeue();
                printf("\nElement removed %d", temp);
            }
            break;
        case 3:
            if (isempty())
            {
                printf("\nEmpty\n");
            }
            else
            {
                display();
            }
            break;
        case 4:
            printf("Program Terminated!!!");
            exit(0);
            break;
        default:
            printf("\nWrong Choice");
            break;
        }
    }
}