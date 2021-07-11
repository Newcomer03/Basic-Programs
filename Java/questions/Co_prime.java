package rrctw;


public class Co_prime
{
    public void main(int n1, int n2)
    {
        int gcd=0;
        for(int i=1;i<=n1;i++)
        {
            if(n1%i==0 && n2%i==0)
            gcd=i;
        }
        if(gcd==1)
        System.out.println("Co-prime Numbers");
        else
        System.out.println("Not Co-prime Numbers");
    }
}