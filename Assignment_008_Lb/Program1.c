#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float fArea = 0.0f;

    fArea = PI * fRadius * fRadius;
    return fArea;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Radius of Circle is :%.4f",dRet);

    return 0;
}