#include "Stack.h"
#include <stdlib.h>
#include <stdbool.h>

typedef struct StackElement {
	int value;
	struct StackElement* next;
}StackElement;

StackElement* push(StackElement* head, int value)
{
	StackElement* newElement = malloc(sizeof(StackElement));
	if (newElement == NULL)
	{
		return NULL;
	}
	newElement->value = value;
	newElement->next = head;
	return newElement;
}

StackElement* deleteTop(StackElement* head)
{
	if (head == NULL)
	{
		return 0;
	}
	StackElement* oldElement = head;
	head = head->next;
	free(oldElement);
	return head;
}

bool isEmpty(StackElement* stack)
{
	return stack== NULL;
}

void freeStack(StackElement* stack)
{
	while (!isEmpty(stack))
	{
		stack = deleteTop(stack);
	}
	free(stack);
	stack = NULL;
}

int top(StackElement* head)
{
	if (head == NULL)
	{
		return 0;
	}
	return head->value;
}