#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern int number;

int main(int argc, char *argv[]);
void check_fun(unsigned int lineNumber, char *str1, stack_t **heade);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void free_stack_t(stack_t *stack);
void free_data_t(char **arguments);
void free_line(char **entrada);
void free_all(char **entrada, stack_t *stack);
void print_dlisttop(const stack_t *h);
stack_t *get_dnodeint_at_index(stack_t *head, unsigned int index);
stack_t *swap_list(stack_t **h, const int n);
stack_t *add_dnodeint(stack_t **head, const int n);
size_t print_dlistint(const stack_t *h);
int *delete_dnodeint_at_index(stack_t **head, unsigned int index);
int dlistint_len(const stack_t *h);
stack_t *sum_dlistint(stack_t **h, const int n);
void add(stack_t **stack, unsigned int line_number);

#endif