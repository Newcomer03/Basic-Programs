package rrctw;


import java.io.*;
public class Sum_of_10_even_numbers
{
    public void main() throws IOException
    {
        BufferedReader obj=new BufferedReader(new InputStreamReader(System.in));
        int sum=0;
        for(int i=1;i<=10;i++)
        {
            System.out.println("Enter an Integer");
            int n=Integer.parseInt(obj.readLine());
            if(n%2==0)
            sum=sum+n;
        }
        System.out.println("Sum is = "+sum);
    }
}