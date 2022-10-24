#include "stack.h"
#include "operations.h"
#include <ctype.h>


int main(void)
{
    stack new;
    initialize(&new);
    bool try = true;
    while(try)
    {
        char num;
        scanf("%c", &num);
        if(num == '+')
        {
            addition(&new);
        }
        if(num == '-')
        {
            subtraction(&new);
        }
        if(num == '*')
        {
            multiplication(&new);
        }
        if(num == '/')
        {
            division(&new);
        }
        else if(isdigit(num))
        {
            int num1;
            sscanf(&num, "%d", &num1);
            push(num1, &new);
        }
        system("cls");
        printALL(&new);
    }
    
    return 0;
}