#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,iSumEven = 0,iSumOdd = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumEven = iSumEven + iDigit;           
        }
        else if((iDigit % 2) != 0)
        {
            iSumOdd = iSumOdd + iDigit;   
        }
        iNo = iNo / 10;
    }
    return iSumEven - iSumOdd;
}

int main()
{
   int iValue = 0,iRet= 0;

   printf("Enter the Number :");
   scanf("%d",&iValue);

   iRet = CountDiff(iValue);

   printf("Summation of Even and Odd Number is :%d",iRet);
    return 0;
}