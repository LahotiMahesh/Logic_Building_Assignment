#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    float fArea = 0.0f;
    fArea = fWidth * fHeight;
    return fArea;
}
int main()
{
    double dRet = 0.0;
    float fValue1 = 0.0f,fValue2 = 0.0f;

    printf("Enter Width :");
    scanf("%f",&fValue1);

    printf("Enter Heigth :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Width and Heigth of Rectangle is :%f",dRet);

    return 0;
}