package rrctw;


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class CheckSpyNumber
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a Number");
        int n = Integer.parseInt(br.readLine().trim());
        int sum = findSum(n);
        int product = findProduct(n);
        
        if(sum==product)
        System.out.println(n+" is a Spy Number");
        else
        System.out.println(n+" is not a Spy Number");
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
    
    public static int findProduct(int n)
    {
        int d = 0;          //the variable 'd' stores the last digit
        int product = 1;
        while(n>0)
        {
            d=n%10;
            product=product*d;
            n=n/10;
        }
        return product;
    }
}