#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    int iSum = 0, iCnt = 0;

    for(iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iCnt + iSum;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter first number : "<<endl;
    cin>>iValue;

    iRet = SumFactors(iValue);

    cout<<"Sum of factors is : "<<iRet<<endl;

    return 0;
}


