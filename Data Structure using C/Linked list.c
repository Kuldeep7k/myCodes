#include<stdio.h>
#include<conio.h>
#define NULL 0

typedef struct nodetype
{
    int info;
    struct nodetype *link;
}node;

main()
{
    node* create();
    void traverse(node*);
    node* search(node*,int);
    void instloc(node**,int,node*);
    int item,data;
    node *head,*loc,*ptr;

    head=create();
    printf("linked list before insertion :\n");
    traverse(head);
    printf("\n Enter Item to search from linked list :");
    scanf("%d",&item);
    loc=search(head,item);
    printf("\n Enter info to be inserted after searched item= ");
    scanf("%d",&data);
    instloc(&head,data,loc);
    printf("Linked list after insertion \n");
    traverse(head);
    ptr=head;
    while(ptr!=NULL)
    {
        ptr=ptr->link;
        free(head);
        head=ptr;
    }
    getch();
}

node* create()
{
    node *ptr,*head=NULL;
    char ch='y';
    int data;
    while(ch=='y' || ch=='Y')
    {
        if(head==NULL)
        {
            head=(node*)malloc(sizeof(node));
            ptr=head;
        }
        else
        {
            ptr->link=(node*)malloc(sizeof(node));
            ptr=ptr->link;
        }
    printf("Enter info. of new Node= ");
    scanf("%d",&data);
    ptr->info=data;
    fflush(stdin);
    printf("Want to Continue :(Y or N)= ");
    scanf("%c",&ch);
    }
    ptr->link=NULL;
    return(head);
}

void traverse(node *head)
{
    node* ptr=head;
    while(ptr!=NULL)
    {
        printf("\n Info of Node is \t %d ",ptr->info);
        ptr=ptr->link;
    }
}

node* search(node *head,int item)
{
    node *loc,*ptr;
    loc=NULL;
    ptr=head;
    while((ptr!=NULL) && (item!=ptr->info))
    ptr=ptr->link;
    if(item==ptr->info)
        loc=ptr;
    return(loc);
}

void instloc(node** head,int item,node *loc)
{
    node* new;
    new=(node*)malloc(sizeof(node));
    new->info=item;
    if(loc==NULL)
    {
        new->link=*head;
        *head=new;
    }
    else
    {
        new->link=loc->link;
        loc->link=new;
    }

}
