#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAXSIZE 5
typedef struct quee
{
int q[MAXSIZE];
int front;
int rear;
}queue;

main()
{
queue q1;
int choice,item;
char ch;

void create_queue();
void enqueue(queue*,int );
int dequeue(queue*);
void display(queue*);
int isempty(queue*);

create_queue(&q1);
while(1)
{
printf("\nChoice 1.Enqueue\t 2.Dequeue\t 3.Display\t 4.exit\n");
printf("Enter your Choice (1-4) : ");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter elements to insert = ");
scanf("%d",&item);
enqueue(&q1,item);
break;

case 2: if (isempty(&q1)==1)
 printf("underflow: queue empty");
 else{
 item=dequeue(&q1);
 printf("Element removed=%d\t",item);
}
break;

case 3: display(&q1);
break;
case 4: exit(0);

}
}
}

void create_queue(queue* qp)
{
    qp->front=0;
    qp->rear=-1;
}

int isempty(queue* qp)
{
    return (qp->rear=-1);
}

void enqueue(queue* qp,int item)
{
    if(qp->rear==(MAXSIZE-1))
        printf("overflow : Queue full");
    else
    {
        qp->rear++;
        qp->q[qp->rear]=item;
    }
}

int dequeue(queue *qp)
{
    int item;
    item=qp->q[qp->front];
    if(qp->front <qp->rear)
        qp->front++;
    else{
        qp->front=0;
        qp->rear=-1;
    }
    return(item);
}

void display(queue* qp)
{
    int i;
    for(i=qp->front; i<=qp->rear;i++)
    {
        printf("%d\t",qp->q[i]);
    }
}
