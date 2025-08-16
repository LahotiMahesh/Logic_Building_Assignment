#include<stdio.h>

double SquareMeter(int iSquare)
{
    float fSqrMeter = 0.0f;
    fSqrMeter = iSquare * 0.0929;
    return fSqrMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0f;

    printf("Enter Temperature in faraheit :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square feet in Square meter is :%f",dRet);
    
    return 0;
}