#include<stdio.h>

#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASSCLASS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS 4
#define RET_DISNINCTION 5

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) && (fMarks > 100.0f))
    {
        return RET_INVALID;
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else if((fMarks >= 35.0f) && (fMarks < 50.0f))
    {
        return RET_PASSCLASS;
    } 
    else if((fMarks >= 50.0f) && (fMarks < 60.0f))
    {
        return RET_SECONDCLASS;
    }
    else if((fMarks >= 60.0f) && (fMarks < 75.0f))
    {
        return RET_FIRSTCLASS;
    }
    else if((fMarks >= 75.0f) && (fMarks <= 100.0f))
    {
        return RET_DISNINCTION;
    }
}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage : ");
    scanf("%f", &fValue);

    iRet = DisplayResult(fValue);
    switch(iRet)
    {
        case RET_FAIL:
            printf("Student is Fail\n");
        break;

        case RET_PASSCLASS:
            printf("Student is having passclass\n");
        break;

        case RET_SECONDCLASS:
            printf("Student is having second class\n");
        break;

        case RET_FIRSTCLASS:
            printf("Student is having first class\n");
        break;

        case RET_DISNINCTION:
            printf("Student is having first class with distinction\n");
        break;

        case RET_INVALID:
            printf("Invalid Input");
        break;
    }
    return 0;
}
