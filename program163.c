#include<stdio.h>
#include<string.h>

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0');
    {
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);  //inbuilt function

    printf("String length is : %d\n",iRet);

    return 0;
}