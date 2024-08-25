//difference between summation of factors and non factors

import java.util.*;

class program207
{
    public static int Difference(int iNo)
    {
        int iSumF = 0, iSumN = 0;
        int iCnt = 0;
        
        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSumF = iSumF + iCnt;
            }
            else
            {
                iSumN = iSumN + iCnt;
            }
        }
        return iSumN - iSumF;
    }
    public static void main(String arg[])
    {
        int iValue = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        iRet = Difference(iValue);

        System.out.println("differnece is : "+iRet);
    }
}


