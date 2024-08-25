#include<stdio.h>

int CheckOccurance(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'l')
        {
            break;
        }
        str++;
    }

    return iCnt;
    
}
int main()
{
    char Arr[100];
    iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CheckOccurance(Arr);   //strlenX(100)

    printf("Number of spaces are : %d\n",iRet);

    return 0;
}