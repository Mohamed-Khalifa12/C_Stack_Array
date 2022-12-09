#include <stdio.h>
#include "help.h"

void createEmptyStack (ST_stack_t *stack)
{
     stack->top = -1;
}

int isFull(ST_stack_t *stack)
{
     if(stack->top == 19)
          return 1;
     return 0;
}

int isEmpty(ST_stack_t *stack)
{
     if(stack->top == -1)
          return 1;
     return 0;
}

int push(ST_stack_t *stack, int data)
{
     if(isFull(stack)){
          printf("Stack Over Flow\n");
          return 0;
     }     
     
     stack->elements[++stack->top] = data;
     return 1;
}

int pop(ST_stack_t *stack)
{
     if(isEmpty(stack)){
          printf("Empty Stack\n");
          return 0;
     }

     return stack->elements[stack->top--];
}

void printStack(ST_stack_t *stack)
{
     if(isEmpty(stack)){
          printf("Empty Stack\n");
          return;
     }

     printf("The Stack Elements are : ");
     for (size_t i = 0; i <= stack->top; i++)
     {
          printf("%d\t", stack->elements[i]);
     }       
}
