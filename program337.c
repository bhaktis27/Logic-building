#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;
    //step 1 : allocate dynamic memory for new node
    newn = (PNODE)malloc(sizeof(NODE));

    //step 2 : initialise the new node
    newn->data = No;
    newn->next = NULL;
    

    //step 3 : check if linked list is empty
    if(*First == NULL)
    {
        *First = newn;
    }
    else  //if linked list contains atleast one node in it
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{

}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);  //InsertFirst(60,51)
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    return 0;
}