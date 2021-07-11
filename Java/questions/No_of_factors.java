package rrctw;


import java.io.*;
public class No_of_factors
{
    public void main() throws IOException
    {
       BufferedReader obj=new BufferedReader (new InputStreamReader(System.in));
       int n=Integer.parseInt(obj.readLine());
       int nfact=0;
       for(int i=1;i<=n;i++)
       {
           if(n%i==0)
           nfact++;
       }
       System.out.println("Number of factors = "+nfact);
    }
}