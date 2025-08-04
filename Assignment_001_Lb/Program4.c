#include<stdio.h>
#include<stdbool.h>

# define TRUE 0
# define FALSE -1
bool Check(int iNo)
{
    if((iNo % 5) == 0)
    {
       return TRUE;
    }
    else
    {
       return FALSE;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number :");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }
    return 0;
}