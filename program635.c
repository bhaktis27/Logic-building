//Anagram string
//string 1 : hello
//string 2 : 0lhel

//string 1 : CAT
//string 2 : ACT

//string 1 : TAN
//string 2 : ANT

#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(char str1[], char str2[])
{
    return true;
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%s",Arr);

    printf("Enter second string : \n");
    scanf("%s",Brr);

    bRet = CheckAnagram(Arr,Brr);

    if(bRet == true)
    {
        printf("Strings are anagram\n");
    }
    else 
    {
        printf("String are not anagram\n");
    }

    return 0;
}