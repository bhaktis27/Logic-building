#include<iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    double Value1 = 10.78f, Value2 = 11.07f;
    double Ret = 0.0;

    Ret = Addition(Value1, Value2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}