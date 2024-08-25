#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iSum = 0;
    int i = 0;

    while(i <= iNo)
    {
        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    iRet = Addition(iValue);

    cout<<"Addition is : "<<iRet<<endl;

    return 0;
}