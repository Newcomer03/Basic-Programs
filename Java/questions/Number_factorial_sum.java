package rrctw;


public class Number_factorial_sum
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
    public void main(int Number)
    {
        int sum=0;
        int d=0;
        while(Number>0)
        {
            d=Number%10;
            sum=sum+factorial(d);
            Number=Number/10;
        }
        System.out.println("Sum of factorial of the Number is: "+sum);
    }
}