#include <stdio.h>

int CountFrequency(int iNo)
{
    int iCount = 0,iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo /10;
    }
    return iCount;
}

int main()
{
   int iValue = 0,iRet = 0;

   printf("Enter the Number :");
   scanf("%d",&iValue);

   iRet = CountFrequency(iValue);

   printf("Frequnecy of 4 is :%d",iRet);

    return 0;
}