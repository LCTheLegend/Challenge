#include "operations.h"

void addition(stack* s)
{
    int one = pop(s);
    int two = pop(s);
    push(one + two, s);
}

void subtraction(stack* s)
{
    int one = pop(s);
    int two = pop(s);
    push(one - two, s);
}

void multiplication(stack* s)
{
    int one = pop(s);
    int two = pop(s);
    push(one * two, s);
}

void division(stack* s)
{
    int one = pop(s);
    int two = pop(s);
    push(one / two, s);
}