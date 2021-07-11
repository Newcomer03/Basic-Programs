package patterns;

import java.util.Scanner;

public class Pattern11
{
    public static void main(String[] args)
    {
        Scanner scn=new Scanner(System.in);
        System.out.println("Enter your Desired row size for the pattern");
        int rowSize=scn.nextInt();
        int columnSize=(rowSize*2)-1;
        int pValue; // the value to be printed
        
        for(int r=1;r<=rowSize;r++)
        {
            pValue=0;
            
            for(int c=1;c<=columnSize;c++)
            {
                if(c>=(columnSize/2)+2-r && c<=(columnSize/2)+r)
                {
                    pValue = c<=(columnSize/2)+1?++pValue:--pValue;
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