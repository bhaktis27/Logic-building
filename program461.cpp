//Generic linked list of Singly Circular

#include<iostream>
using namespace std;

template <class T>
struct nodeSC
{
    T data;
    struct nodeSC *next;
};

template <class T>
class SinglyCL
{
    private:
        struct nodeSC<T> * First;
        struct nodeSC<T> * Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    if(First == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }

    struct nodeSC<T> * temp = First;
    do
    {
        cout<<"| "<<temp->data<<"|-> ";
        temp = temp->next;
    } while(temp != Last->next);
    cout <<"NULL\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeSC<T> * newn = new nodeSC<T>;
    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        Last = newn;
        newn->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        Last->next = First;
    }
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodeSC<T> * newn = new nodeSC<T>;
    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        Last = newn;
        newn->next = First;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        Last->next = First;
    }
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Invalid position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeSC<T> * newn = new nodeSC<T>;
        newn->data = No;
        newn->next = NULL;

        struct nodeSC<T> * temp = First;
        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }

    if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct nodeSC<T> * temp = First;
        First = First->next;
        Last->next = First;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    if(First == NULL)
    {
        return;
    }

    if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct nodeSC<T> * temp = First;
        while(temp->next != Last)
        {
            temp = temp->next;
        }
        delete Last;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeSC<T> * temp1 = First;
        for(int i = 1; i < iPos-1; i++)
        {
            temp1 = temp1->next;
        }

        struct nodeSC<T> * temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

int main()
{
    SinglyCL<int> *iobj = new SinglyCL<int>();
    int iRet = 0;

    iobj->InsertFirst(101);
    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<< iRet <<endl;

    iobj->InsertLast(121);
    iobj->InsertLast(151);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<< iRet <<endl;

    iobj->InsertAtPos(105,3);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<< iRet <<endl;

    iobj->DeleteFirst();

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<< iRet <<endl;

    iobj->DeleteLast();

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<< iRet <<endl;

    iobj->DeleteAtPos(4);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : "<< iRet <<endl;

    return 0;
}
