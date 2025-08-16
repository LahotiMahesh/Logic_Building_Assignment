// #include<stdio.h>

// int FactorialDiff(int iNo)
// {
//     int iCnt = 0,iEvenFact = 1,iOddFact = 1;

//     for(iCnt = 1;iCnt <= iNo; iCnt++)
//     {
//         if((iCnt % 2) == 0)
//         {
//             iEvenFact = iEvenFact * iCnt;
//         }
//         else
//         {
//             iOddFact = iOddFact * iCnt;
//         }
//     }
//     return iEvenFact - iOddFact;

// }

// int main()
// {
//    int iValue = 0,iRet = 0;

//    printf("Enter Number :");
//    scanf("%d",&iValue);

//    iRet = FactorialDiff(iValue);

//    printf("Difference between Factorial is :%d",iRet);

//    return 0;
// }


#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo  = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
    if((iNo % iCnt) == 0)
   {
        iSum = iNo + iCnt;
   }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
   
    
}




int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is perfect Number \n");
    }
    else
    {
        printf("%d is not a perfect Number");
    }
}