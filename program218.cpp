#include<iostream>
using namespace std;

float SumAverage(int *Arr, int iSize)
{
    int Sum = 0, i = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + Arr[i];
    }

    return (Sum/iSize);
}
int main()
{
    int iLength = 0, i = 0;
    int  *ptr = NULL;
    float fRet = 0;

    cout<<"Enter the number of elements that you want to store : ";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements : \n";
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    fRet = SumAverage(ptr, iLength);

    cout<<"Sum of average is : "<<fRet;

    return 0;

}

