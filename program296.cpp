#include<iostream>
using namespace std;

void  DisplayFactors(int iNo)
{
    int i = 1;

    while (i <= (iNo/2))
    {
        if((iNo % i) == 0)
        {
            cout<<i<<endl;
        }
        i++;
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}