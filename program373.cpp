#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private : 
        PNODE First;
        int Count;

    public :
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void DeleteAtPos(int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL :: SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL :: InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void SinglyLL :: InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else  
    {
        temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

void InsertAtPos(int No,int iPos)
{
    PNODE newn = NULL;
    PNODE temp;
    int i = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(int No);
    }
    else if(iPos == iCount)
    {
        InsertLast(int No);
    }
    else 
    {
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;

        temp = First;
        
        for(i = 1; i < iCount + 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
    iCount++;
}

void SinglyLL :: Display();
{
    PNODE temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<First->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int SinglyLL :: Count()
{
    return iCount;
}

void SinglyLL :: DeleteFirst()
{
    
}
int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    obj.InsertAtPos(105,5);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    return 0;
}