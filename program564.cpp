#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();

        void Accept();
        void Display();

        bool LinearSearch(T Value);
        bool BiDirectionalSearch(T Value);
        bool BinarySearch(T Value);

        void BubbleSort();
        void BubbleSortEfficient();

};

template <class T>
ArrayX<T>::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int i = 0;

    cout<<"Entered elements are : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
}

template <class T>
bool ArrayX<T> :: BiDirectionalSearch(T Value)
{
    int iStart = 0;
    int iEnd = 0;
    bool flag = false;

    for(iStart = 0, iEnd = iSize-1; iStart <= iEnd; iStart++, iEnd--)
    {
        if(Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}


template <class T>
bool ArrayX<T> :: BinarySearch(T Value)
{
    int iStart = 0;
    int iEnd = 0;
    int iMid = 0;
    bool flag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if((Arr[iMid] == Value) || (Arr[iStart] == Value) || (Arr[iEnd] == Value))
        {
            flag = true;
            break;
        }
        else if(Value > Arr[iMid])
        {
             iEnd = iMid + 1;
        }
        else if(Value < Arr[iMid])
        {
            iStart = iMid - 1;
        }
    }
    return flag;
}

template <class T>
void ArrayX<T> :: BubbleSort()
{   
    T temp;
    int i = 0, j = 0;
        //1      2          3
    for(i = 0; i < iSize-1; i++) //outer loop
    {    //      1       2         3
        for(j = 0; j < iSize- 1- i; j++) //inner loop
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
        cout<<"Array after pass : "<<i+1<<"\n";
        Display();
    }
}

template <class T>
void ArrayX<T> :: BubbleSortEfficient()
{   
    T temp;
    int i = 0, j = 0;
    bool flag = false;
        //1      2          3
    for(i = 0; (i < iSize-1) && (flag == true); i++) //outer loop
    {    //      1       2         3
        flag = false;

        for(j = 0; j < iSize- 1- i; j++) //inner loop
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;
            }
        }
        
        cout<<"Array after pass : "<<i+1<<"\n";
        Display();
    }
}
int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();

    cout<<"Data before sorting : \n";

    aobj->Display();
    
    aobj->BubbleSortEfficient();

    cout<<"Data after sorting : \n";
    aobj->Display();
    
    return 0;
}