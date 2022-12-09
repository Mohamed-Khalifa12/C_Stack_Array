#define STACK_SIZE 20

typedef struct stack
{
     int elements[STACK_SIZE];
     int top;
} ST_stack_t;

void createEmptyStack (ST_stack_t *stack);
int push(ST_stack_t *stack, int data);
int pop(ST_stack_t *stack);
void printStack(ST_stack_t *stack);