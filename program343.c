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

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}  //time complexity of this function is o(1) i.e order of 1.

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}  //time complexity of this function is o(N) where N is number or elements.

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d | ->",First->data);
        First = First->next;
    }
    printf("NULL\n");
} //time complexit o(N)

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} //timpe complexity o(N)

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n",iRet);

    return 0;
}


/*
    1 : Allocate memory for node
    2 : Initialise the node
    3 : Check whether LL is empty or not
    4 : If LL is empty store the address of new node in the heap pointer through first
    5 : otherwise store the address of old first node int the next of new node
    6 : update the head accordingly
*/