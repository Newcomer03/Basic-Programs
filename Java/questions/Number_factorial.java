package rrctw;


public class Number_factorial
{
    public int factorial(int n)
    {
        int fact=1,i=1;
        while(i<=n)
        {
            fact=fact*i;
            i++;
        }
        return fact;
    }
}