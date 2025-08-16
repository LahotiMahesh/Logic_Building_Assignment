#include <stdio.h>

void DisplayPattern(int iNo1,int iNo2)
{
    int i = 0, j = 0;
    for(i = 1;i <= iNo1;i++)
    {
        for(j = iNo2; j >= 1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Number of Rows and Columb:");
    scanf("%d %d",&iValue1,&iValue2);

    DisplayPattern(iValue1,iValue2);

    return 0;
}