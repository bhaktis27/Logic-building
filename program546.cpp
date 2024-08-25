#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int Value)
        {
            this->iSize = Value;
            this->Arr = new int[iSize];
        }
        void Accept(int Arr[], int iSize)
        {
            int i = 0;

            cout<<"Enter the elements : \n";
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display(int Arr[], int iLength)
        {
            int i = 0;

            cout<<"Enter the elements : \n";
            for(i = 0; i < iLength; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};
int main()
{
    int *ptr = NULL;    
    int iLength = 0,  i = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept(ptr,iLength);
    aobj->Display(ptr,iLength);

    delete aobj;
    
    return 0;

}