package patterns.alphabets;

import java.util.Scanner;

public class PatternPrintX
{
	public static void main(String[] args)
	{
		Scanner scn=new Scanner(System.in);

		System.out.println("Enter the size of the pattern");
		int size=scn.nextInt();

		for(int r=1;r<=size;r++)
		{
			for(int c=1;c<=size;c++)
			{
				if(r+c==(size+1) || r==c)
				{
					System.out.print("*");
				}
				else
				{
					System.out.print(" ");  // prints one space...
				}
			}
			System.out.println();
		}
	}
}