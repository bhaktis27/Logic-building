#include<stdio.h>

int strlenCapX(char *str)
{
    int iCnt = 0;

    while((*str >= 'A') && (*str <= 'Z'))
    {
        iCnt++;
    }
    str++;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenCapX(Arr);   //strlenX(100)

    printf("Number of capital letters are : %d\n",iRet);

    return 0;
}