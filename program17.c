#include<stdio.h>
#define RET_INVALID -1
#define RET_FAIL 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_DISTINCTION 5

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))
    {
        return RET_INVALID;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else if((fMarks >= 35.0f) && (fMarks <= 50.0f))
    {
        return RET_PASSCLASS;
    }
    else if((fMarks >= 50.0f) && (fMarks <= 60.0f))
    {
        return RET_SECONDCLASS;
    }
    else if((fMarks >= 60.0f) && (fMarks <= 75.0f))
    {
        return RET_FIRSTCLASS;
    }
    else if((fMarks >= 75.0f) && (fMarks <= 100))
    {
        return RET_DISTINCTION;
    }
}
int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Enter your percentage : ");
    scanf("%f", &fValue);

    iRet = DisplayResult(fValue);

    if(iRet == RET_INVALID)
    {
        printf("Your input is invalid");
    }
    else if(iRet == RET_FAIL)
    {
        printf("Student is Fail\n");
    }
    else if(iRet == RET_PASSCLASS)
    {
        printf("student is having pass class");
    }
    else if(iRet == RET_FIRSTCLASS)
    {
        printf("Student is having first class");
    }
    else if(iRet == RET_SECONDCLASS)
    {
        printf("student is having second class");
    }
    else if(iRet == RET_DISTINCTION)
    {
        printf("student is having distinction");
    }
    return 0;
}