#include<iostream>
using namespace std;

class ArrayX
{
    private : 
        int *Arr;
        int iSize;

    public :
        ArrayX(int No)
        {
            iSize = No;
            Arr = new int [iSize];    // <- used to allocate resource
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        int SumDigits(int iNo)
        {
            int iSum = 0;

            while(iNo != 0)
            {
                iSum = iSum + 
                iNo = iNo / 10;
            }
            return iSum;
        }

        int CalculateDigitsSum(int iNo)
        {
            int i = 0, iRet = 0;

            for(i = 0; i < iSize; i++)
            {
               iRet = CalculateDigits(Arr[i]);
               cout<<"Sum of digits of"<<Arr[i]<<" is "<<iRet<<endl;
            }
           
        }

        void DisplayDigitsCount()
        {
            int i = 0, iRet = 0;

            for(i = 0; i < iSize; i++)
            {
                iRet = CalculateDigits(Arr[i]);
                cout<<Arr[i]<<" contains "<<iRet<<" digits in it "<<endl;
            }
        }
};
int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);   

    aobj->Accept();

    aobj->DisplayDigitsCount();

    delete aobj;

    return 0;
}