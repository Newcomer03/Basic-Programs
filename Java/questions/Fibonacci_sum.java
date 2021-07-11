package rrctw;


public class Fibonacci_sum
{
    public void main(int n)
    {
        int a=0,b=1,c=0,i=3,sum=1;     
        while(i<=n)
        {
            c=a+b;
            sum=sum+c;
            i++;
            a=b;
            b=c;
        }
        System.out.println("Sum of Palindrome series is :"+sum);
    }
}