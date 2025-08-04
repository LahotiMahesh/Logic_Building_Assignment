#include<stdio.h>

void FactRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     int iCnt = 0;

     for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}