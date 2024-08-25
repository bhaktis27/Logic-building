#include<stdio.h>
#include<stdlib.h>

void Updater(int Arr[], int iSize)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] >= 100)
        {
            Arr[i] = 0;
        }
    }
}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;

    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Updater(Brr,iCount);

    printf("Data updation : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
}