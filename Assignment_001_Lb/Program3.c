#include<stdio.h>

int Display()
{
    int iCnt = 5;

    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    Display();
    return 0;
}