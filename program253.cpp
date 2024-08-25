//source : HEELo WorLd
//Destination : lloord
#include<iostream>

using namespace std;

void strcpyspaceX(char *Dest, char *Src)   //src = source   dest = destination
{
    while(*Src != '\0')
    {
        if(*Src >= ' ') 
        {
           *Dest = *Src;
        }
        *Dest = '\0';
        
    }
    *Dest = '\0';
}
int main()
{
    char Arr[30];
    char Brr[30];

    cout<<"Enter the sourve string : "<<endl;
    cin.getline(Arr,30);

    strcpyspaceX(Brr, Arr);   //strcpy(200,100)

    cout<<"Copied string is : "<<Brr<<endl;

    return 0;
}