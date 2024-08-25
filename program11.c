//check whether the number is between 30 to 50

#include<stdio.h>
#include<stdbool.h>

bool CheckRange(int iNo)
{
    if((iNo >= 30) && (iNo <= 50))
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);

    if(bRet == true)
    {
        printf("%d is in between 30 and 50\n",iValue);
    }
    else
    {
        printf("%d is not in between 30 and 50\n",iValue);
    }
    return 0;
}