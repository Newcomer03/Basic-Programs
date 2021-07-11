package rrctw;


public class Only_odd
{
    public void main(int n)
    {
        int d=0,d2=0,rem=0,rev=0,flag=0;
        while(n>0)
        {
            rem=n%10;
            n=n/10;
            if(rem%2 !=0)
            {
                d=d*10+rem;
                flag=1;
            }
        }
        while(d>0)
        {
            d2=d%10;
            d=d/10;
            rev=rev*10+d2;
        }
        if(flag==1)
        System.out.println(rev);
        else
        System.out.println("No odd digits found in the integer");
    }
}