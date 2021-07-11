package rrctw;


public class Twin_prime
{
    public int check(int n)
    {
        int ctr=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            ctr++;
        }
        return ctr;
    }
    public void main(int n1, int n2)
    {
        int ctr1=check(n1);
        int ctr2=check(n2);
        if((ctr1==2 && ctr2==2) && ((n1-n2==2)||(n2-n1==2)))
        System.out.println("Twin-prime Numbers");
        else
        System.out.println("Not Twin-prime Numbers");
    }
}