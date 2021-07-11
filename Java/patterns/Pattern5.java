package patterns;

import java.util.Scanner;

public class Pattern5
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
				if(r+c==(size/2)+2||c-r==(size/2)||r-c==(size/2)||r+c==(size*2)-(size/2))
				{
					System.out.print("*"); //prints a star
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