#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 5

typedef struct stacktype
{
int s[MAX];
int top;
}stack;

main()
{
stack s1;
int choice,item;
char ch;
void create_stack(stack*);
void push(stack*,int);
int pop(stack*);
int peek(stack*);
int isempty(stack*);
void display(stack*);
create_stack(&s1);
while(1)
{
printf("\nChoice 1.push\t 2.pop\t 3.Peek\t 4.Display\t 5.exit\n");
printf("Enter your Choice (1-5)->");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter elements of push = ");
scanf("%d",&item);
push(&s1,item);
break;

case 2: if (isempty(&s1)==1)
 printf("underflow: stack empty");
 else{
 item=pop(&s1);
 printf("element popped=%d\t\n",item);
}
break;

case 3: if (isempty(&s1)==1)
printf("underflow : stack empty");
else
{
    item=peek(&s1);
    printf("element at the top=%d",item);
}
break;

case 4: display(&s1);
break;
case 5: exit(0);
}
}
}
void create_stack(stack* sp)
{
    sp->top=-1;
}
int isempty(stack* sp)
{
    return (sp->top==-1);
}

void push(stack* sp,int item)
{
    if(sp->top==MAX-1)
        printf("overflow : stack is full");
    else
    {
        sp->top++;
        sp->s[sp->top]=item;
    }
}

int pop(stack *sp)
{
    int item;
    item=sp->s[sp->top];
    sp->top--;
    return(item);
}

int peek(stack *sp)
{
    int item;
    item=sp->s[sp->top];
    return(item);
}

void display(stack* sp)
{
    int i;
    printf("\n Content of stack \n");
    for(i=0; i<=sp->top;i++)
    {
        printf("%d\t",sp->s[i]);
    }
}
