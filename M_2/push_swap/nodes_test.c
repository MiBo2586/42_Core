#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	typedef	struct node
	{
		int	val;
		struct	node	*next;
	} node_t;

	node_t *head;
	node_t *body;
	node_t leg;
	node_t leg2;

	leg.next = &leg2;
	leg2.next = head;
	head->next = &leg;

	leg.next

	head = (node_t*) malloc(sizeof(node_t));
	body = (node_t*) malloc(sizeof(node_t));
	if (head == 0)
		return 1;
	head->val = 2;
	head->next=body;
	body->val = 6;
	body->next = NULL;

	printf("Pointer to the struct Head: %d\n", head->val);
	printf("Pointer to the struct Body: %d\n", body->val);
	free (head);
	free (body);
	return (0);
}