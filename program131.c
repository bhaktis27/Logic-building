#include<stdio.h>
#include<stdlib.h>

int Divisible(int Arr[],int iSize)
{
    int i = 0;
    int Frequency = 0;

    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 5) == 0)
        {
            Frequency++;
        }
    }
    return Frequency;
    
} 
int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL, iRet = 0;

    printf("Enter the number of elements that you want : ");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : ");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d\n",&Brr[i]);
    }

    printf("Entered elements are : ");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    iRet = Divisible(Brr,iCount);

    printf("Elements divided by 5 are : %d",iRet);

    return 0;
}

