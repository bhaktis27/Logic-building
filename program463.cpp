//Generic Stack

#include<iostream>
using namespace std;

template<class T>
struct nodeST
{
    int data;
    struct nodeST *next;
};

template<class T>
class Stack
{
    private:
        struct nodeST<T> * First;
        int iCount;

    public:
        Stack();
        void Display();
        int Count();
        void Push(T No);  //InsertFirst()
        int Pop(); //deleteFirst()
};

template<class T>
Stack<T> :: Stack()
{
    First = NULL;
    iCount = 0;
}

template<class T>
void Stack<T> :: Display()
{
    cout<<"Elements of stack are : \n";
    struct nodeST<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    cout<<"\n";
}

template<class T>
int Stack<T> :: Count()
{
    return iCount;
}

template<class T>
void Stack<T> :: Push(T No)
{
    struct nodeST<T> * newn = NULL;

    newn = new nodeST<T>;

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

template<class T>
int Stack<T> :: Pop()
{
    int iValue = 0;
    struct nodeST<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty\n";
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
    Stack<int> *obj = new Stack<int>();
    int iRet = 0;

    obj->Push(10);
    obj->Push(20);
    obj->Push(30);
    obj->Push(40);

    obj->Display();

    iRet = obj->Count();

    cout<<"Number of elements int the stack are : "<<iRet<<"\n";

    iRet = obj->Pop();

    cout<<"Poped element is : "<<iRet<<"\n";

    iRet = obj->Pop();

    cout<<"Poped element is : "<<iRet<<"\n";

    obj->Display();

    iRet = obj->Count();

    cout<<"Number of elements int the stack are : "<<iRet<<"\n";

    obj->Push(50);

    obj->Display();

    iRet = obj->Count();

    cout<<"Number of elements int the stack are : "<<iRet<<"\n";

    return 0;
}



