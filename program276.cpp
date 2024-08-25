#include<iostream>
using namespace std;

void Display(int iNo)
{
    int i = 1;

    while(i <= iNo)
    {
        cout<<i<<endl;
        i++;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number : "<<endl;
    cin>>iValue;

    Display(iValue);

    cout<<"End of application"<<endl;

    return 0;
}