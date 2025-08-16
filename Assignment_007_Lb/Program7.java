import java.util.*;

class Program7 
{
    public static boolean CheckPerfect(int iNo)
     {
        int iCnt = 0, iSum = 0;

        for (iCnt = 1; iCnt <= iNo / 2; iCnt++) 
        {
            if((iNo % iCnt) == 0) 
            {
                iSum = iSum + iCnt;
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

    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number :");

        int iValue = sobj.nextInt();

        boolean bRet = CheckPerfect(iValue);

        if (bRet == true) 
        {
            System.out.println("Given Number is Perfect");
        } else
        {
            System.out.println("Given Number is not Prefect");
        }
    }
}