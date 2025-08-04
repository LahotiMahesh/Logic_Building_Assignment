#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    for(iCnt = 10; iCnt >= 1;iCnt--)
    {
        iTable = iCnt * iNo;
        printf("Reverse Table of Given Number is :%d\n",iTable);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}