package patterns;

import java.util.Scanner;

public class Pattern10
{
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter your Desired size for the pattern");
        int size=scn.nextInt();
        int d=0; //d=dependency.
        int pValue; // the value to be printed
        
        for(int r=1;r<=size;r++)
        {
            d=r<=(size/2)+1?++d:--d;
            pValue=0;
            
            for(int c=1;c<=size;c++)
            {
                if(c>=(size/2)+2-d && c<=(size/2)+d)
                {
                    pValue = c<=(size/2)+1?++pValue:--pValue;
                    System.out.print(pValue);
                }
                else
                {
                    System.out.print(" ");  //prints a blank space
                }
            }
            System.out.println();
        }
    }
}