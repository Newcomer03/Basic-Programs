package patterns.alphabets;

import java.util.Scanner;

public class PatternPrintA
{
	public static void main(String[] args)
	{
		Scanner scn=new Scanner(System.in);

		System.out.println("Enter the size of the pattern");
		int size=scn.nextInt();
		int midrow=(size/2+1)/2+1;

		for(int r=1;r<=size;r++)
		{
			for(int c=1;c<=size;c++)
			{
				if(r+c==size/2+2||c-r==size/2||r==midrow && r+c>=size/2+2 && c-r<size/2)
				{
					System.out.print("*"); //prints a star
				}
				else
				{
					System.out.print(" "); // prints one space...
				}
			}
			System.out.println();
		}
	}
}