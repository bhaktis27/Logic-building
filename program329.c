//position10

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask =0xfffffdff;
    unsigned int iResult = 0;

    printf("Enter the number : \n");
    scanf("%u",&iNo);

    iResult = iNo & iMask;

    printf("Updated number is : %u\n",iResult);

    return 0;
}


//1111 1111 1111 1111 1111 1101 1111 1111 
//f     f     f    f    f   d   f     f
//0xfffffdff

