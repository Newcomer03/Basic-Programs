package rrctw;


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class CheckHappyNumber
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a Number");
        int n = Integer.parseInt(br.readLine().trim());
        int sum = findSquareSum(n);

        while(sum>9)
        {
            sum = findSquareSum(sum);
        }

        if(sum==1)
            System.out.println(n+" is a Happy Number");
        else
            System.out.println(n+" is not a Happy Number");
    }

    public static int findSquareSum(int n)
    {
        int d = 0;          //the variable 'd' stores the last digit
        int sum = 0;
        while(n>0)
        {
            d=n%10;
            sum=sum+(d*d);
            n=n/10;
        }
        return sum;
    }
}