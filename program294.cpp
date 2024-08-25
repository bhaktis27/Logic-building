#include<iostream>
using namespace std;

int SumDigitsI(int iNo)
{
    int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }    
     return iSum;
}

int SumDigitsR(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        SumDigits(iNo);
    }    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    iRet = SumDigitR(iValue);

    cout<<"Sum of Digits are : "<<iRet<<endl;

    return 0;
}