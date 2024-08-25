import java.util.*;

class program607
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+"," ");
        String Arr[] = str.split(" ");

        StringBuffer temp = null;

        for(int i = 0; i < Arr.length; i++)
        {
            temp = new StringBuffer(Arr[i]);
            temp = temp.reverse();

            System.out.println(temp);
        }
    }
}