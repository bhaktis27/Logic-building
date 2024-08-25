import java.util.*;

class Arithmatic
{
    public
        int iNo1;
        int iNo2;
    
    public Arithmatic(int A, int B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    public int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}

class program200
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;
        int iRet = 0;

        System.out.println("Enter the first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the second number : ");
        iValue2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iValue1,iValue2);

        iRet = aobj.Addition();

        System.out.println("Addition is : "+iRet);
    }
}


