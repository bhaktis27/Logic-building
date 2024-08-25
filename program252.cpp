//source : HEELo WorLd
//Destination : lloord
#include<iostream>

using namespace std;

void strcpyCapitalX(char *Dest, char *Src)   //src = source   dest = destination
{
    while(*Src != '\0')
    {
        if(*Src >= 'A') && (*Src <= 'Z')
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

    cout<<"Enter the sourve string : "<<endl;
    cin.getline(Arr,30);
    
    strcpyCapitalX(Brr, Arr); 
    cout<<"Capital letter is : "<<Brr<<endl;

    return 0;
}


//incomplete