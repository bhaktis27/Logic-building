//position4

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask =0x00000008;
    unsigned int iResult = 0;

    printf("Enter the number : \n");
    scanf("%u",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated number is : %u\n",iResult);

    return 0;
}

/*
    Input : 12    0  0  0  0  1  1  0  0
    output : 4    0  0  0  0  0  1  0  0 

    input : 21    0  0  0  1  0  1  0  1
    output:29     0  0  0  1  1  1  0  1

                0  0  0  0  1  1  0  0
                0  0  0  0  1  0  0  0   <- 4th position
                -----------------------^
                0  0  0  0  0  1  0  0
-------------------------------------------------------------

                0  0  0  0  0  1  0  0
                0  0  0  0  1  0  0  0   
                -----------------------^
                0  0  0  0  1  1  0  0

*/




//practice
// 0100  0110  1111  0000  1101  1100  1110  0011  
//  4     6     15    0     13    12    14    3   <-decimal
//  4     6     f     0      d     c     e    3   <-hexa
//0x46f0dce3