import java.util.*;

class program600
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s"," ");
        String Arr[] = str.split(" ");

        int i = 0, iMax = 0, iMaxIndex = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i].length() > iMax)
            {
                iMax = Arr[i].length();
                iMaxIndex = i;
            }
        }
        System.out.println("Largest word is : "+Arr[iMaxIndex]);
        System.out.println("Largest word length is : "+iMax);
    } 
}


            