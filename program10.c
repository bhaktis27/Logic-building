//check whether the number is between 30 to 50

#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo < 30) && (iNo > 50))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("Yess\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}