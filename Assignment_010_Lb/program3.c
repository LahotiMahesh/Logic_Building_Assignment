#include<stdio.h>

int CountRange(int iNo)
{
    int iCount = 0,iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count of ODD Number in the digit is :%d",iRet);

    return 0;
}