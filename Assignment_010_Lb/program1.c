#include<stdio.h>

int CountEvenDigit(int iNo)
{
    int iCount = 0,iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
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

    iRet = CountEvenDigit(iValue);

    printf("Count of Even Number in the digit is :%d",iRet);

    return 0;
}