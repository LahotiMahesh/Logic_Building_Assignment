#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }   
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("Given Number contains 0");
    }
    else
    {
        printf("Given Number does not contains 0");
    }

    return 0;
}

