import java.util.*;

class ArrayX
{
    public int iRow, iCol;
    public int Arr[][];

    public ArrayX(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    protected void finalise()
    {
        System.out.println("Garbage collector is collecting the memeory");
        Arr = null;
    }

    public void Accept()
    {
        int i = 0, j = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements : \n");
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Entered elements are : \n");
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.println(Arr[i][j]);
            }
        }
    }

    public int Summation()
    {
        int i = 0, j = 0, iSum = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }

    public int Maximum()
    {
        int i = 0, j = 0, iMax = 0;

        iMax = Arr[i][j];
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(iMax < Arr[i][j])
                {   
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }

    public int Minimum()
    {
        int i = 0, j = 0, iMin = 0;

        iMin = Arr[i][j];
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(iMin > Arr[i][j])
                {
                    iMin = Arr[i][j];
                }
            }
        }
        return iMin;
    }

    public void RowSum()
    {
        int i = 0, j = 0, iSum = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        System.out.println("Addition of all elements of row "+i+" is "+iSum);
    }

    public int DigonalSum()
    {
        int i = 0, j = 0, iSum = 0;

        if(iRow != iCol)
        {
            System.out.println("Unable to perform as matrix is not square matrix");
            return -1;
        }

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }

    public void SumEvenOdd()
    {
        int i = 0, j = 0, iSumE = 0, iSumO = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] % 2 == 0)
                {
                    iSumE = iSumE + Arr[i][j];
                }
                else 
                {
                    iSumO = iSumO + Arr[i][j];
                }
            }
        }
        System.out.println("Addition of even elements is : "+iSumE);
        System.out.println("Addition of odd elements is : "+iSumO);
    }

    public void UpdateMatrix()
    {
        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] % 5 == 0)
                {
                    Arr[i][j] = 0;
                }
            }
        }
    }

    public void UpdateMatrixEven()
    {
        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] % 2 != 0)
                {
                    Arr[i][j] = Arr[i][j] + i;
                }
            }
        }
    }

    public int AdditionDigits()
    {
        int i = 0, j = 0;
        int iNo = 0, iDigit = 0, iSum = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                iNo = Arr[i][j];

                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }
                Arr[i][j] = iSum;
                iSum = 0;
            }
        }
        return iSum;
    }
}
class program584
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first element : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter the second element : ");
        int iValue2 = sobj.nextInt();

        ArrayX aobj = new ArrayX(iValue1,iValue2);

        aobj.Accept();
        aobj.Display();

        int iRet = 0;
        iRet = aobj.Summation();
        System.out.println("Addition of elements is : "+iRet);

        iRet = aobj.Maximum();
        System.out.println("Maximum element is : "+iRet);

        iRet = aobj.Minimum();
        System.out.println("Minimum element is : "+iRet);

        aobj.RowSum();

        iRet = aobj.DigonalSum();
        System.out.println("Addition of diagonal element is : "+iRet);

        aobj.SumEvenOdd();
        aobj.UpdateMatrix();
        aobj.UpdateMatrixEven();

        iRet = aobj.AdditionDigits();
        System.out.println("Addition of digits is : "+iRet);
    }
}


