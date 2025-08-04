#include<stdio.h>

int FactorMultiplication(int iNo)
{
   int iSum = 1;
   int iCnt = 0;

   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
   {
       if((iNo % iCnt) == 0)
       {
        // printf("inside for Loop");
         iSum = iSum * iCnt;
       }
    }
    return iSum;
}

int main()
{
   
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = FactorMultiplication(iValue);

    printf("Multification of Factor are :%d",iRet);
    return 0;
}