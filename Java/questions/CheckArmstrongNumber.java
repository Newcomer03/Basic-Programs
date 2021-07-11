package rrctw;


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class CheckArmstrongNumber
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a Number");
        int n = Integer.parseInt(br.readLine().trim());
        int sum = findCubeSum(n);

        
        if(sum==n)
            System.out.println(n+" is a Armstrong Number");
        else
            System.out.println(n+" is not a Armstrong Number");
    }

    public static int findCubeSum(int n)
    {
        int d = 0;          //the variable 'd' stores the last digit
        int sum = 0;
        while(n>0)
        {
            d=n%10;
            sum=sum+(d*d*d);
            n=n/10;
        }
        return sum;
    }
}