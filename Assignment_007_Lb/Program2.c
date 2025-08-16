#include<stdio.h>

int DollarToINR(int iNo)
{
    int iReturn = 0;
    iReturn = iNo * 70;
    return iReturn;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of Usd :\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value of INR is :%d",iRet);


    return 0;
}