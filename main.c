#include <stdio.h>
#include "help.h"

int main()
{
   ST_stack_t stack;
   createEmptyStack(&stack);

   for(int i = 0; i<=21; i++)
      push(&stack, i);

   int last_item = pop(&stack);
   int second_last_item = pop(&stack);

   printStack(&stack);
   printf("\nThe first item out = %d\nThe second item out = %d", last_item, second_last_item);
   return 0;
}