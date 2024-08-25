//check whether the student is pass or failed

#include<stdio.h>
#include<stdbool.h>

bool DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) && (fMarks > 100.f))
    {
        printf("Invalid input");
        return false;
    }

    if((fMarks > 0.0f) && (fMarks < 35.0f))
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
    float fValue = 0;
    bool bRet = 0;

    printf("Enter the marks : ");
    scanf("%f",&fValue);

    bRet = DisplayResult(fValue);

    if(bRet == true)
    {
        printf("Student is pass");
    }
    else
    {
        printf("Student is not pass");
    }
    return 0;
}