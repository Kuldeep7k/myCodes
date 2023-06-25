#include<stdio.h>
#include<conio.h>
#include<string.h>
#define NULL 0

struct queue_node_type
{
    int info;
    struct queue_node_type *link;
};

typedef struct queue_node_type node;

main()
{
    node *front=NULL;
    node *rear=NULL;

    void enq_linkqueue(node**,node**,int);
    void deq_linkqueue(node**);
    void traverse(node*);
    void destroy_stack(node*,node*);
    int choice,item;
    char ch;

    do
    {
        printf("\nChoice 1.Enqueue\t 2.Dequeue\t 3.Display\t Any other to Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter value to insert = ");
scanf("%d",&item);
enq_linkqueue(&front,&rear,item);
break;

case 2:
 deq_linkqueue(&front);
break;

case 3: traverse(front);
break;

default:
    printf("\n End of operations\n");

    }
    printf("Want to Continue:(Y or N)= ");
    fflush(stdin);
    ch=getchar();
    }while((ch=='Y' || ch=='y'));
    destroy_queue(front,rear);
    printf("\n End of Program...\n");
}

void enq_linkqueue(node** front,node** rear,int item)
{
    node* new;
    new=(node*)malloc(sizeof(node));
    new->info=item;
    if(*front==NULL)
    {
        *front=new;
        *rear=new;
    }
    else
    {
        (*rear)->link=new;
        (*rear)=new;
    }
    new->link=NULL;
}

void traverse(node* front)
{
    node *ptr=front;
    printf("\n Traversing queue\n");
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->link;
    }
}
void deq_linkqueue(node** front)
{
    node *save;
    if(*front==NULL)
        printf("Underflow : queue empty");
    else{

    printf("Element deleted =\t%d\n",(*front)->info);
    save=*front;
    *front=save->link;
    free(save);
    }
}

void destroy_queue(node* front,node* rear)
{
    node *ptr=front;
    printf("Destroying ...linked queue");
    while(front!=rear)
    {
        ptr=ptr->link;
        free(front);
        front=ptr;
    }
}
