#include<stdio.h>

int MultDigit(int iNo)
{
    int iMult = 1,iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iDigit * iMult;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("Multification of Digit is :%d",iRet);
     
    return 0;
}