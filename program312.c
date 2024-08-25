#include<stdio.h>

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter the first number : \n");
    scanf("%u",&iNo1);

    printf("Enter the second number : \n");
    scanf("%u",&iNo2);

    iRet = iNo1 | iNo2;

    printf("Result of bitwise | : %u\n",iRet);

    return 0;
}



/*

    |
    Operand1    Operand2    Result
    1           1           1
    1           0           1
    0           0           0
    0           0           0
    0           1           1
     
    iNo1        11      0 0 0 0 1 0 1 1
    iNo2        15      0 0 0 0 1 1 1 1
    -----------------------------------  |
                        0 0 0 0 1 1 1 1     15

    iNo1        67      0 1 0 0 0 0 1 1
    iNo2        34      0 0 1 0 0 0 1 0
    -----------------------------------  |
                        0 1 1 0 0 0 1 1     99                     
*/