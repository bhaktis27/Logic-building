import java.util.*;

class program669
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        HashMap <Character, Integer>hobj = new HashMap<Character, Integer>();
        //Linkedlist <Integer>lobj = new Linkedlist<Integer>();

        int Frequency = 0;

        for(char ch : Arr)
        {
           if(hobj.containsKey(ch))
           {
                Frequency = hobj.get(ch);
                hobj.put(ch,Frequency+1);
           }
           else 
           {
                hobj.put(ch,1);
           } 
        }

        Set <Character> setobj = hobj.KeySet();

        for(char data : setobj)
        {
            System.out.println(hobj.get(data));
        }
    }
}

//put(key,value)
//get(key)
//containsKey(key)