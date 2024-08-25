#include<iostream>
using namespace std;

template <class T>
struct nodeQ
{
    int data;
    struct nodeQ *next;
};

template <class T>
class Queue
{
    private:
        struct nodeQ<T> * First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();
        void EnQueue(T No);  //InsertLast()
        int DeQueue(); //deleteFirst()
};

template <class T>
Queue<T> :: Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Queue<T>:: Display()
{
    cout<<"Elements of Queue are : \n";
    struct nodeQ<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int Queue<T> :: Count()
{
    return iCount;
}

template <class T>
void Queue<T> :: EnQueue(T No)
{
    struct nodeQ<T> * newn = NULL;
    struct nodeQ<T> * temp = NULL;
    newn = new nodeQ<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        temp = First;

        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}  

template <class T>
int Queue<T> :: DeQueue()
{
    int iValue = 0;
    struct nodeQ<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to remove the element as Queue is empty\n";
        return -1;
    }   
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;

        iCount--;
    }
    return iValue;
} 

int main()
{
    Queue<int> *obj = new Queue<int>();
    int iRet = 0;

    obj->EnQueue(10);
    obj->EnQueue(20);
    obj->EnQueue(30);
    obj->EnQueue(40);

    obj->Display();

    iRet = obj->Count();

    cout<<"Number of elements int the Queue are : "<<iRet<<"\n";

    iRet = obj->DeQueue();

    cout<<"Removed element is : "<<iRet<<"\n";

    iRet = obj->DeQueue();

    cout<<"Removed element is : "<<iRet<<"\n";

    obj->Display();

    iRet = obj->Count();

    cout<<"Number of elements int the Queue are : "<<iRet<<"\n";

    obj->EnQueue(50);

    obj->Display();

    iRet = obj->Count();

    cout<<"Number of elements int the Queue are : "<<iRet<<"\n";

    return 0;
}



