#include "stack.h"

Node *head;

int main()
{
    push(3);
    push(5);
    push(2);
    print_stack();
    pop();
    pop();
    pop();
}

void push(int value)
{
    Node *n = malloc(sizeof(Node));
    n->value = value;
    n->next = head;

    head = n;
}

int pop()
{
    Node *n = head;
    int value = n->value;

    head = n->next;
    free(n);
    return value;
}

void print_stack()
{
    Node *cur = head;
    int i = 0;
    while (cur != NULL)
    {
        printf("%d:\t%d\n", i++, cur->value);
        cur = cur->next;
    }
}
