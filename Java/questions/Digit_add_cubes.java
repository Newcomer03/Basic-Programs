package rrctw;


public class Digit_add_cubes
{
    public void main(int n)
    {
        int sum=0;
        int d=0;
        while(n>0)
        {
            d=n%10;
            sum=sum+d*d*d;
            n=n/10;
        }
        System.out.println("Sum of cubes of digits = "+sum);
    }
}