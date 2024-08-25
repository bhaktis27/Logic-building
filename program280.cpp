#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo > 1)
    {
        cout<<iNo<<endl;
        iNo--;
        Display(iNo);
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter the number : ";
    cin>>iValue;

    Display(iValue);

    cout<<"End of application";

    return 0;
}


