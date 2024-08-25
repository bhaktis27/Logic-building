#include<stdio.h>
#include<stdlib.h>

void Updater(int Arr[],int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
       Arr[i] = Arr[i] + 1; 
    }
   
}
int main()
{
    int *Brr = NULL, i = 0;
    int iCount = 0;

    printf("Enter the number of elements that you want to enter : \n");  //1
    scanf("%d",&iCount) ;

    Brr = (int *)malloc(iCount * sizeof(int));   //2

    printf("Enter the elements : \n");
    for(i = 0; i < iCount; i++)   //3
    {
        scanf("%d",&Brr[i]);
    }

    Updater(Brr,iCount);

    printf("Data after updation is : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }
    
    free(Brr);

    return 0;
}