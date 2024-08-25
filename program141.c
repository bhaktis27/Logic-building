#include<stdio.h>
#include<stdlib.h>

void Updater(int Arr[], int iSize)
{
    int i = 0;
    for(i = 0; i < iSize; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            Arr[i] = Arr[i] + 1;
        }
    }
}
int main()
{
    int *Brr = NULL;
    int iCount = 0, i = 0;

    printf("Enter the number of elements that you want : ");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

    Updater(Brr, iCount);

    printf("Data after updation is : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    free(Brr);

    return 0;
}