#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 1)
        {
            iSum++;
        }
        iNo = iNo / 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Number of 1 are : %d\n",iRet);

    return 0;
}



