#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *headpair = NULL, *headodd = NULL;
        listint_t *empty = NULL, *notis = NULL;


	add_nodeint_end(&headpair, 1);
	add_nodeint_end(&headpair, 17);
	add_nodeint_end(&headpair, 972);
	add_nodeint_end(&headpair, 50);
	add_nodeint_end(&headpair, 98);
	add_nodeint_end(&headpair, 98);
	add_nodeint_end(&headpair, 50);
	add_nodeint_end(&headpair, 972);
	add_nodeint_end(&headpair, 17);
	add_nodeint_end(&headpair, 1);
	print_listint(headpair);

	if (is_palindrome(&headpair) == 1)
		printf("Linked list is a palindrome\n");
	else
		printf("Linked list is not a palindrome\n");

	free_listint(headpair);

        puts("=========================");

        add_nodeint_end(&headodd, 1);
	add_nodeint_end(&headodd, 17);
	add_nodeint_end(&headodd, 972);
	add_nodeint_end(&headodd, 50);
	add_nodeint_end(&headodd, 98);
        add_nodeint_end(&headodd, 1);
	add_nodeint_end(&headodd, 98);
	add_nodeint_end(&headodd, 50);
	add_nodeint_end(&headodd, 972);
	add_nodeint_end(&headodd, 17);
	add_nodeint_end(&headodd, 1);
	print_listint(headodd);

	if (is_palindrome(&headodd) == 1)
		printf("Linked list is a palindrome\n");
	else
		printf("Linked list is not a palindrome\n");

	free_listint(headodd);

        puts("=========================");


	if (is_palindrome(&empty) == 1)
		printf("Linked list is a palindrome\n");
	else
		printf("Linked list is not a palindrome\n");

        puts("==========Palindrome===============");

        add_nodeint_end(&notis, 1);
	add_nodeint_end(&notis, 17);
	add_nodeint_end(&notis, 972);
	add_nodeint_end(&notis, 50);
	add_nodeint_end(&notis, 97);
	add_nodeint_end(&notis, 98);
	add_nodeint_end(&notis, 50);
	add_nodeint_end(&notis, 972);
	add_nodeint_end(&notis, 17);
	add_nodeint_end(&notis, 1);
	print_listint(notis);

	if (is_palindrome(&notis) == 1)
		printf("Linked list is a palindrome\n");
	else
		printf("Linked list is not a palindrome\n");

	free_listint(notis);

        puts("=========================");

	return (0);
}
