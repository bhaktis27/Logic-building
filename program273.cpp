#include<iostream>
using namespace std;

//approach 3 with recursion
void Display()
{
    static int i = 1;

    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
        Display();
    }
   
}
int main()
{
    Display();

    return 0;
}