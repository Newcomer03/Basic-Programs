package patterns;

import java.util.Scanner;

public class Pattern8
{
    public static void main(String [] args)
    {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter your desired size for the pattern");
        int size=scn.nextInt();
        int k=0;
        
        for(int r=1;r<=size;r++)
        {
            k=r<=(size/2)+1?++k:--k;
            for(int c=1;c<=size;c++)
            {
                if(c<=k || c>=(size+1)-k)
                {
                    System.out.print("*"); //prints a star
                }
                else
                {
                    System.out.print(" "); //prints a blank space
                }
            }
            System.out.println();
        }
    }
}