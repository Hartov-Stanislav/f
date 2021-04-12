#include "Stack.h"
#include <stdio.h>

int main()
{
	StackElement* head = NULL;
	head = push(head, 1);
	head = push(head, 2);
	head = deleteTop(head);

	return 0;
}