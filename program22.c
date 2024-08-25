#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Hanuman...\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number of times you want to print Jay Hanuman on screen");
    scanf("%f",&iValue);

    Display(iValue);

    return 0;
}