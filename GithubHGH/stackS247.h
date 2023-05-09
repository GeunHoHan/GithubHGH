#pragma once
#define STACK_SIZE 100

typedef int element;

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);