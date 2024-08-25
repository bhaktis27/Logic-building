import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int no)
    {
        Arr = new int[no];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of the array  : ");
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Elements of the array are : ");
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public float Average()
    {
        int iSum = 0, i = 0;
        float fAns = 0;

        for(i = 0; i < Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        fAns = (float)iSum /(float) (Arr.length);
        return fAns;
    }
}
class program243
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements that you want to store : ");
        int iNo = sobj.nextInt();

        ArrayX aobj = new ArrayX(iNo);

        System.out.println("Size of array is : "+aobj.Arr.length);

        aobj.Accept();
        aobj.Display();

        float fRet = aobj.Average();

        System.out.println("Average is : "+fRet);

    }
}