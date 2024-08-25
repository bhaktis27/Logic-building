#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout<<"*"<<endl;
        i++;
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