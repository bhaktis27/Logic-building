#include<stdio.h>
#include<stdlib.h>

int Search(int Arr[], int iSize, int iNo)
{
    int i = 0;
    int iFrequency = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo);
        {
            iFrequency++;
        }
    }
    return iFrequency;

}
int main()
{
    int iCount = 0, i = 0, iRet = 0, iValue = 0;
    int *Brr = NULL;
    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered elements that you want to search : \n");
    scanf("%d",&iValue);

    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    iRet = Search(Brr,iCount,iValue); 

    printf("Frequency of that number is : %d\n",iRet);   
    
    free(Brr);  

    return 0;
}


