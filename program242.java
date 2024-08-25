import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : \n");
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int i = 0;

        System.out.println("Entered elements are : \n");
        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public float Average()
    {
        int Sum = 0, i = 0;
        float fAns = 0;

        for(i = 0; i < Arr.length; i++)
        {
            Sum = Sum + Arr[i];
        }
        fAns = Sum/(Arr.length);
        return fAns;
    }
}

class program242
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        float fRet = 0;

        System.out.println("Enter the number of elements that you want to store : ");
        iValue = sobj.nextInt();

        ArrayX aobj = new ArrayX(iValue);

        System.out.println("Array length is : "+aobj.Arr.length);

        aobj.Accept();
        aobj.Display();

        fRet = aobj.Average();

        System.out.println("Average is : "+fRet);
    }
}


