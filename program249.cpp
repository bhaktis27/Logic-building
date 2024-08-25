#include<iostream>

using namespace std;

void strcpyX(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        *Dest = *Src;

        *Dest++;
        *Src++;
    }
    *Dest = '\0';
}
int main()
{
    char Arr[30] = "Hello World";
    char Brr[30];

    strcpyX(Brr,Arr);

    cout<<"Copied string is : "<<Brr<<endl;

    return 0;
}


