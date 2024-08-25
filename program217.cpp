#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elements : ";
    cin>>iLength;

    ptr = new int [iLength];

    cout<<"Enter the elements : \n";
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Entered elements are : \n";
    for(i = 0; i < iLength; i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;

    return 0;
}



