#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - the doubly linked list node
 *
 * Description:
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 * @prev: Pointer to the previous element of the list
 *
 * Return: 0
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print function prototype */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* sorting function prototype */
void bubble_sort(int *array, size_t size);

#endif
