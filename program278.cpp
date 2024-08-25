#include<iostream>
using namespace std;

void Display(int iNo)
{
    while(iNo > 1)
    {
        cout<<iNo<<endl;
        iNo--;
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


