package patterns;

import java.util.Scanner;

public class Pattern3
{
	public static void main(String[] args)
	{
		Scanner scn=new Scanner(System.in);

		System.out.println("Enter the size of the pattern");
		int n=scn.nextInt();

		for(int r=1;r<=n;r++)
		{
			for(int s=n-r;s>=1;s--)
			{
				System.out.print(" "); // prints one space...
			}

			for(int cfp=1;cfp<=r;cfp++)  // cfp = Column First Part...
			{
				System.out.print(cfp);
			}

			for(int csp=r-1;csp>=1;csp--)  // csp = Column Second Part...
			{
				System.out.print(csp);
			}
			System.out.println();
		}
	}
}