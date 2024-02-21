#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char _putchar(char c);

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/* functions for printing the structures*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*functions for sorting algorithms*/
void bubble_sort(int *array, size_t size);
void switch_nodes(listint_t **list, listint_t **node1, listint_t *node2);
void insertion_sort_list(listint_t **list);
void switch_ints(int *i, int *j);
void selection_sort(int *array, size_t size);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void switch_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void switch_node_behind(listint_t **list, listint_t **tail,
		listint_t **shaker);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /*SORT_H*/
