#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    int iValue1 = 10.78, iValue2 = 11.07;
    double iRet = 0.0;

    float fValue1 = 10.78f, fValue2 = 11.07;
    double fRet = 0.0;

    double dValue1 = 10.78, dValue2 = 11.07;
    double dRet = 0.0;

    iRet = Addition(iValue1,iValue2);
    cout<<"Addition of integers is : "<<iRet<<"\n";

    fRet = Addition(fValue1,fValue2);
    cout<<"Addition of integers is : "<<fRet<<"\n";

    dRet = Addition(dValue1,dValue2);
    cout<<"Addition of integers is : "<<dRet<<"\n";

    return 0;
}