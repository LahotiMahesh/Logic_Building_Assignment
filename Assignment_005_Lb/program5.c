#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    int Count = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        Count = iNo * iCnt;
        
        printf("%d\t",Count);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return 0;
}