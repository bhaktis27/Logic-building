import java.util.*;

class program591
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        System.out.println("String before replacement : "+str);

        str = str.replaceAll("a","z");

        System.out.println("String after replacement : "+str);
    }
}