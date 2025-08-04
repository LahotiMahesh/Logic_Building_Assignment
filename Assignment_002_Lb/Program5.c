#include<stdio.h>
#include<stdbool.h>

#define True 0
#define False -1


bool CheckEven(int iNo1)
{
    if((iNo1 % 2) == 0)
    {
       return True;
    }
    else
    {
        return False;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == True)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    return 0;
}