package rrctw;


public class Digit_extraction
{
    public void main(int n)
    {
        int d=0;
        while(n>0)
        {
            d=n%10;
            n=n/10;
        }
    }
}