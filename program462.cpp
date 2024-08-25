//Generic linked list of doubly linear linked list

#include<iostream>
using namespace std;

template <class T>
struct nodeDL 
{
    T data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

template <class T>
class DoublyLL 
{
    private:
        struct nodeDL<T> * First;
        int iCount;

    public:
        DoublyLL();

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
DoublyLL<T>::DoublyLL() 
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T>::Display() 

{
    struct nodeDL<T> * temp = First;
    while(temp != NULL) 
    {
        cout<<"| "<<temp->data<<"|<=> ";
        temp = temp->next;
    }
    cout <<"NULL\n";
}

template <class T>
int DoublyLL<T>::Count() 
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No) 
{
    struct nodeDL<T> * newn = NULL;
    newn = new nodeDL<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (First == NULL) 
    {
        First = newn;
    } 
    else 
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T No) 
{
    struct nodeDL<T> * newn = NULL;
    newn = new nodeDL<T>;

    newn->data = No;
    newn->next = nullptr;
    newn->prev = nullptr;

    if (First == nullptr) 
    {
        First = newn;
    } 
    else 
    {
        struct nodeDL<T> * temp = First;
        while(temp->next != nullptr) 
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos) 
{
    if (iPos < 1 || iPos > (iCount + 1)) 
    {
        return;
    }

    if (iPos == 1) 
    {
        InsertFirst(No);
    } 
    else if (iPos == iCount + 1) 
    {
        InsertLast(No);
    } 
    else 
    {
        struct nodeDL<T> * newn = NULL;
        newn = new nodeDL<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        struct nodeDL<T> * temp = First;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next = newn;
        if (newn->next != NULL) 
        {
            newn->next->prev = newn;
        }

        iCount++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst() 
{
    if (First == NULL) 
    {
        return;
    }

    if (First->next == NULL) 
    {
        delete First;
        First = NULL;
    } 
    else 
    {
        struct nodeDL<T> * temp = First;
        First = First->next;
        First->prev = NULL;
        delete temp;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast() 
{
    if (First == NULL) 
    {
        return;
    }

    if (First->next == NULL) 
    {
        delete First;
        First = NULL;
    } 
    else 
    {
        struct nodeDL<T> * temp = First;
        while(temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos) 
{
    struct nodeDL<T> * temp1;
    struct nodeDL<T> * temp2;
    
    if (iPos < 1 || iPos > iCount) 
    {
        return;
    }

    if (iPos == 1) 
    {
        DeleteFirst();
    } 
    else if (iPos == iCount) 
    {
        DeleteLast();
    } 
    else 
    {
        temp1 = First;
        for(int i = 1; i < iPos - 1; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1->next;
        temp1->next = temp2->next;
        if (temp2->next != NULL) 
        {
            temp2->next->prev = temp1;
        }
        delete temp2;

        iCount--;
    }
}

int main() 
{
    DoublyLL<int> *iobj = new DoublyLL<int>;
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : " <<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : " <<iRet<<endl;

    iobj->InsertAtPos(105, 5);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : " <<iRet<<endl;

    iobj->DeleteFirst();

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : " <<iRet<<endl;

    iobj->DeleteLast();

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : " <<iRet<<endl;

    iobj->DeleteAtPos(5);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are : " <<iRet<<endl;

    return 0;
}
