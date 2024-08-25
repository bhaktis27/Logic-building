import java.util.*;


class program206
{
    public static int SumFactor(int iNo)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
    public static void main(String args[])
    {
        int iValue = 0;
        int iAns = 0;

        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the element : ");
        iValue = sobj.nextInt();

        iAns = SumFactor(iValue);

        System.out.println("Sum of factors is : "+iAns);
    }
}


