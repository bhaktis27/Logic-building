#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool search(int Arr[], int iSize, int iNo)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo);
        {
            break;
        }
    }
    if(i == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }

}
int main()
{
    int iCount = 0, i = 0, iValue = 0;
    int *Brr = NULL;
    bool bRet = false;
    
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

    bRet = Search(Brr,iCount,iValue); 
    if(bRet == true)
    {
        printf("Element is present in array\n");
    }
    else
    {
        printf("Element is not present in array\n");
    }   
    
    free(Brr);  

    return 0;
}


