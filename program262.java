import java.util.*;

class program262
{
  public static int CountCapital(String str)
  {
    int i = 0, iCnt = 0;
    char Arr[] = str.toCharArray();

    for(i = 0; i < Arr.length; i++)
    {
      if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
      {
        iCnt++;
      }
    }
    return iCnt;
  }
  public static void main(String args[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter your name : ");
    String name = sobj.nextLine();

    int iRet = CountCapital(name);

    System.out.println("Capital letters are : "+iRet);
  }
}