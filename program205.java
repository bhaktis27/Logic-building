import java.util.*;

class program205
{
    public static void main(String Args[])
    {
        int iValue = 0, iCnt = 0, iSum = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        iValue = sobj.nextInt();

        for(iCnt = 1; iCnt <= (iValue / 2); iCnt++)
        {
            if((iValue % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        System.out.println("Sum of factors is : "+iSum);
    }
}


