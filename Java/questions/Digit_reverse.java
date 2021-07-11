package rrctw;


public class Digit_reverse
{
    public void main(int n)
    {
        int d=0,rev=0;
        while(n>0)
        {
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        System.out.println("Reverse number is: "+rev);
    }
}