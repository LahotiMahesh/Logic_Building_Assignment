#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iFact = 1,iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iCnt * iFact;
        }
    }
    return iFact;
    
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial is :%d",iRet);
    return 0;
}