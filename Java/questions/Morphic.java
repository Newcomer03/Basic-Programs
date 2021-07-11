package rrctw;


import java.io.*;
public class Morphic
{
    public void main() throws IOException
    {
        BufferedReader obj=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter an Integer");
        int n=Integer.parseInt(obj.readLine());
        int d=0,orig=n,digit=0;
        while(n>0)
        {
            d=n%10;
            n=n/10;
            digit++;
        }
        n=orig;
        if(n== (n*n)%(int)Math.pow(10,digit))
        System.out.println("Automorphic Number");
                
        if(n== (n*n*n)%(int)Math.pow(10,digit))
        System.out.println("Trimorphic Number");
        
        if(n== (3*n*n)%(int)Math.pow(10,digit))
        System.out.println("Tri-automorphic Number");
    }
}