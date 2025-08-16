import java.util.*;
class Program6
{
    public static boolean CheckPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2;iCnt <= (iNo/2); iCnt++)
        {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }
        if(iCnt > (iNo/2))
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
        System.out.println("Enter Number");

        int iValue = sobj.nextInt();

        boolean bRet =  CheckPrime(iValue);
        

        if(bRet == true)
        {
            System.out.println("Given Number is Prime");
        }
        else
        {
            System.out.println("Given Number is not Prime");
        }
    }
}