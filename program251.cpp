//source : HEllo WorLd
//Destination : lloord
#include<iostream>

using namespace std;

void strcpysmallX(char *Dest, char *Src)   //src = source   dest = destination
{
    while(*Src != '\0')
    {
        if(*Src >= 'a') && (*Src <= 'z')
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }
    *Dest = '\0';
}
int main()
{
    char Arr[30];
    char Brr[30];

    strcpysmallX(Brr, Arr);   //strcpy(200,100)

    cout<<"Copied string is : "<<Brr<<endl;

    return 0;
}