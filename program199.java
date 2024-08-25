import java.util.*;

class program199
{
    public static void main(String args[])
    {
        int iValue1 = 0, iValue2 = 0, iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the second number : ");
        iValue2 = sobj.nextInt();

        iAns = iValue1 + iValue2;

        System.out.println("Addition is : "+iAns);
    }
}

