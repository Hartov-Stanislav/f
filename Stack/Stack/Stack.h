#pragma once
#include <stdbool.h>

typedef struct StackElement StackElement;

// Create new node on top of stack, recives stacl and new value
StackElement* push(StackElement* head, int value);

// Delete top of stack, recieves stack
StackElement* deleteTop(StackElement* head);

// Checks that stack is empty, recieves stack
bool isEmpty(StackElement* head);

// Delete all stack, recieves stack
void freeStack(StackElement** stack);

// Gets value from top of stack, recieves stack
int top(StackElement* head);