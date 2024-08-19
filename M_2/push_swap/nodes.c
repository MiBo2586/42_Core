#include <stdio.h>

int main(void)
{
    typedef struct node
    {
        int val;
        struct node *next;
    } node_t;
    node_t *head;
    
    head = (node_t *)malloc(sizeof(node_t));
    if (head == 0)
        return 1;
    head.val = 2;
    head.next = 0;
}
