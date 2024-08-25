import java.util.*;

public class program680
{
    public static void main(String args[])
    {
        int n = 0, i = 0;
        
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the number : ");
        n = sc.nextInt();
        
        if((n % 2) != 0)
        {
            System.out.println("weird");
        }
        for(i = 2; i < 5; i++)
        {
            if((n % 2) == 0)
            {
                System.out.println("not weird");
            }
        }
        for(i = 6; i < 20; i++)
        {
            if((n % 2) == 0)
            {
                System.out.println("weird");
            }
        }
        for(i = 1; i > 20; i++)
        {
            if((n % 2) == 0)
            {
                System.out.println("Nit weird");
            }
        }
    }
}