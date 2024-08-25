#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int No1, No2;
    
    Arithmatic(int A, int B)
    {
        No1 = A;
        No2 = B;
    }

    int Addition()
    {
        int iAns = 0;
        iAns = No1 + No2;
        return iAns;
    }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter the first value : ";
    cin>>iValue1;

    cout<<"Enter the second value : ";
    cin>>iValue2;

    Arithmatic *aobj = new Arithmatic(iValue1,iValue2);

    iRet = aobj->Addition();

    cout<<"Addition is : "<<iRet;

    return 0;

}


