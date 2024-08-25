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
        int i = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements : \n");

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
}
class program241
{
    public static void main(String args[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements that you want to store : ");
        iValue = sobj.nextInt();

        ArrayX aobj = new ArrayX(iValue);

        System.out.println("Array size is : "+aobj.Arr.length);

        aobj.Accept();

        aobj.Display();
    }
}


