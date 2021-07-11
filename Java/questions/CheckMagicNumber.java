package rrctw;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class CheckMagicNumber
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a Number");
        int n = Integer.parseInt(br.readLine().trim());
        int sum = findSum(n);
        
        while(sum>9)
        sum = findSum(sum);
        
        if(sum==1)
        System.out.println(n+" is a Magic Number");
        else
        System.out.println(n+" is not a Magic Number");
    }
    
    public static int findSum(int n)
    {
        int d = 0;          //the variable 'd' stores the last digit
        int sum = 0;
        while(n>0)
        {
            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        return sum;
    }
}