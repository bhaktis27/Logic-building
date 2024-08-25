import java.util.*;

class program209
{
    public static int SumEvenDigits(int iNo)
    {
        int iSum = 0, iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                iSum = iSum + iDigit;
            }
            iNo = iNo / 10;
        }
        return iSum;
    }
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        iRet = SumEvenDigits(iValue);

        System.out.println("Sum of even digit is : "+iRet);
    }
}