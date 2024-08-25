#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iNo)
        {
            cout<<"Inside contructor\n";
            iSize = iNo;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;
            cout<<"Enter the elements : \n";
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0; 
            cout<<"Entered elements are : \n";
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        float Average()
        {
            float fAns = 0;
            int iSum = 0, i = 0;

            for(i = 0; i < iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            fAns =  (float)iSum / (float)iSize;
            return fAns;
        }
};

int main()
{
    int iLength = 0;
    float fRet = 0.0f;

    cout<<"Enter the number of elements that you want to store : ";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();
    aobj.Average();

    fRet = aobj.Average();

    cout<<"Average is : "<<fRet<<endl;

    return 0;
    
}


