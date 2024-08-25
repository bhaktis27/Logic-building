#include<iostream>
using namespace std;

int CountEven(int Arr[], int iSize)
{
    static int i = 0;
    static int iCount= 0;

    if(i < iSize)
    {
        if(Arr[i] % 2 == 0)
        {
            iCount++;
        }
        i++;
        CountEven(Arr,iSize);
    }
    return iCount;
}
int main()
{
    int ilength = 0, i = 0;
    int *Arr = NULL;
    int iRet = 0;

    cout<<"Enter the number of elements that you want to store : ";
    cin>>ilength;

    Arr = new int[ilength];

    cout<<"Enter the elements : \n";
    for(i = 0; i < ilength; i++)
    {
        cin>>Arr[i];
    }

    iRet = CountEven(Arr,ilength);

    cout<<"Even numbers are : "<<iRet;
    
    return 0;
}

