#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 3
struct Stack
{
int items[MAX_SIZE];
int top;
};
void initialize(struct Stack*stack)
{
stack->top=-1;
}
int isEmpty(struct Stack*stack)
{
return(stack->top==-1);
}
int isFull(struct Stack*stack)
{
return(stack->top==MAX_SIZE-1);
}
void push(struct Stack*stack,int item)
{
if(isFull(stack)){
printf("stack is full.cannot push%d.\n",item);
}
else
{
stack->items[++stack->top]=item;
printf("%d pushed onto the stack.\n",item);
}
}
void pop(struct Stack*stack)
{
if(isEmpty(stack))
{
printf("Stack is empty.cannot pop.\n");
}
else
{
printf("%d popped from the stack.\n",stack->items[stack->top--]);
}
}
void peek(struct Stack*stack)
{
if(isEmpty(stack))
{
printf("Stack is empty cannot peek.\n");
}
else
{
printf("Top item:%d\n",stack->items[stack->top]);
}
}
void display(struct Stack*stack)
{
if(isEmpty(stack)){
printf("Stack is empty.\n");
}
else
{
printf("Stack elements:");
for(int i=0;i<=stack->top;i++)
{
printf("%d " ,stack->items[i]);
}
printf("\n");
}
}
int main()
{
struct Stack stack;
initialize(& stack);
int choice,item;
do
{
printf("\n stack operations:\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Peek\n");
printf("4. Display\n");
printf("5. Quit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter an item to push on to the stack:");
scanf("%d",&item);
push(&stack,item);
break;
case 2:
pop(&stack);
break;
case 3:
peek(&stack);
break;
case 4:
display(&stack);
break;
case 5:
printf("exiting the program");
exit(0);
default:
printf("Invalid choice. please try again.\n");
}
}
while(1);
return 0;
}





