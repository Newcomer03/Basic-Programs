package patterns;

import java.util.Scanner;

public class Pattern1
{
	public static void main(String[] args)
	{
		Scanner scn=new Scanner(System.in);

		System.out.println("Enter the size of the pattern");
		int n=scn.nextInt();

		for(int r=1;r<=n;r++)
		{
			for(int c=1;c<=r;c++)
			{
				System.out.print(c+" ");
			}
			System.out.println();
		}
	}
}