package patterns;

import java.util.Scanner;

public class Pattern4
{
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);

        System.out.println("Enter the size of the pattern");
        int n=scn.nextInt();

        for(int rt=1;rt<=(n/2)+1;rt++)  // rt = Row Top...
        {
            for(int c=1;c<=rt;c++)
            {
                System.out.print(c);
            }
            System.out.println();
        }

        for(int rb=1;rb<=n/2;rb++)      // rb = Row Bottom...
        {				
            for(int c=1;c<=((n/2+1)-rb);c++)
            {
                System.out.print(c);
            }
            System.out.println();
        }

    }
}