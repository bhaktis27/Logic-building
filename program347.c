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
}  

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
}  

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d | ->",First->data);
        First = First->next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} 

void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL) //case 1
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if((*First) -> next == NULL) //case 2
    {
        free(*First);
        *First == NULL;
    }
    else //case 3 
    {
        temp = *First;
        *First = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;
    
    if(*First == NULL) //case 1
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if((*First) -> next == NULL) //case 2
    {
        free(*First);
        *First == NULL;
    }
    else //case 3 
    {
        temp = *First;  

        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        } 
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int No, int iPos)
{
    int iLength = 0;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid position\n");
        return ;
    }

    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {
        
    }
}

void DeleteAtPos(PPNODE First, int iPos)
{
    int iLength = 0;

    iLength = Count(*First);

    if((iPos < 1) || (iPos > iLength))
    {
        printf("Invalid position\n");
        return ;
    }

    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == iLength)
    {
        InsertLast(First,No);
    }
    else
    {
        
    }

}
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