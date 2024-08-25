#include<stdio.h>
#include<stdlib.h>

void Reverse(int Arr[], int iSize)
{
    int iStart = 0, iEnd = 0, Temp = 0;

    iStart = 0;
    iEnd = iSize -1;

    while(iStart < iEnd)
    {
        Temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = Temp;

        iStart++;
        iEnd--;
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

    Reverse(Brr,iCount);

    printf("Elements after reverse : \n");
    for(i = 0; i < iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }
    
    free(Brr);

    return 0;
}