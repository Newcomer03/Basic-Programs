package rrctw;

public class Prime_or_not
{
    public void main(int n)
    {
        int ctr=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            ctr++;
        }
        if(ctr==2)
        System.out.println("Prime Number");
        else
        System.out.println("Not a Prime Number");
    }
}