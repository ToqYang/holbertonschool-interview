#include "lists.h"


/**
 * check_cycle - Check if the linked has a cycle
 * @list: Head of the linked list
 *
 * Return: (int) 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
		return (0);

	slow = list;
	fast = list;


	while ((slow) && (fast) && (fast->next))
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (1);
	}

	return (0);
}
