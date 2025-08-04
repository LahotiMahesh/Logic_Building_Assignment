#include<stdio.h>

int Factorial(int iNo)
{ 
    long int iSum = 1;
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("%d",iRet);
}