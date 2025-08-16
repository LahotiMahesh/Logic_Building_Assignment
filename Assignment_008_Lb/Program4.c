#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0f;
    fCelsius = (fTemp - 32) * (5.0/9.0);
    return fCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter Temperature in faraheit :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Farenheit is :%f",dRet);
    
    return 0;
}