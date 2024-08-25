#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        printf("%d",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number of times you want to print numbers in screen");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}