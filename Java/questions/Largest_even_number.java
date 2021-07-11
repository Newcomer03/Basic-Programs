package rrctw;


import java.io.*;
public class Largest_even_number
{
    public void main() throws IOException
    {
        BufferedReader obj=new BufferedReader(new InputStreamReader(System.in));
        int max=0,flag=0;
        for(int i=1;i<=10;i++)
        {
            System.out.println("Enter an Integer");
            int n=Integer.parseInt(obj.readLine());
            if(n>max&&n%2==0)
            {
                max=n;
                flag=1;
            }
        }
        if(flag==1)
        System.out.println("Largest even Integer = "+max);
        else
        System.out.println("No even integer found");
    }
}