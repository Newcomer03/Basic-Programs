package patterns;

public class Pattern14
{
    public static void main(String[] args)
    {
        
        for(int i=0;i<5;i++)
        {
            int num=7;
            for(int j=1;j<=5;j++)
            {
                System.out.print(num);
                if(j<=i)
                {
                    num=num-1;
                }
            }
            System.out.println();
        }
    }
}

//OUTPUT
//77777
//76666
//76555
//76544
//76543