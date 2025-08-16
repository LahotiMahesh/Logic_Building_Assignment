#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iKilometer = 1000,iMeter = 0;   
    iMeter = iKilometer * iNo;
    return iMeter;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Kilometer :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("You travel %d meter ",iRet);
    
    return 0;
}