#include<stdio.h>
#include<conio.h>
#include<string.h>
#define NULL 0

struct stack_node_type
{
    int info;
    struct stack_node_type *link;
} node;

main()
{

    void push(node**,int);
    void pop(node**);
    void display(node*);
    void destroy_stack(node*);
    node* top=NULL;
    int choice,item;
    char ch;

    do
    {
        printf("\nChoice 1.push\t 2.pop\t 3.Display\t 4.exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter elements of push = ");
scanf("%d",&item);
push(&top,item);
break;

case 2:
 pop(&top);
break;

case 3: display(top);
break;

default:
    printf("\n End of operations\n");

    }
    printf("Want to Continue:(Y or N)= ");
    fflush(stdin);
    ch=getchar();
    }while((ch=='Y' || ch=='y'));
    destroy_stack(top);
    printf("\n End of Program...\n");
}

void push(node** top,int item)
{
    node* new;
    new=(node*)malloc(sizeof(node));
    new->info=item;
    new->link=*top;
    *top=new;
}

void display(node* top)
{
    node* ptr=top;
    printf("\n Display stack\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->link;
    }
}
void pop(node** top)
{
    node *save;
    if(*top==NULL)
        printf("underflow");
    else{

    printf("Element to be pooped is \t%d",(*top)->info);
    save=*top;
    *top=(*top)->link;
    free(save);
    }
}

void destroy_stack(node* top)
{
    node *ptr=top;
    printf("Destroying stack...linked list");
    while(ptr!=NULL)
    {
        ptr=ptr->link;
        free(top);
        top=ptr;
    }
}
