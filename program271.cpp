#include<iostream>
using namespace std;

//approach 3 without recursion
void Display()
{
    int i = 1;

    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
    }
}
int main()
{
    Display();

    return 0;
}