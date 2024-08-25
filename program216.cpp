#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ptr = new int [iLength];
    //ptr = (int *)malloc(sizeof(int) * iLength);  ->  in c language



    delete []ptr;
    //free(ptr)  -> in c language
    return 0;
}