#include<stdio.h>

void Pattern(int iNo1,int iNo2)
{
    int i = 0,j = 0;

    for(i = 1;i <= iNo1; i++)
    {
        for(j = 1;j <= iNo2;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
   int iValue1 = 0,iValue2 = 0;

   printf("Enter the rows :");
   scanf("%d",&iValue1);

   printf("Enter the Columb :");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);

    return 0;
}