#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node
{
    int value;
    Node *next;
};

void push(int value);
int pop();
void print_stack();
