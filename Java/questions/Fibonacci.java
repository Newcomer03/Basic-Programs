package rrctw;


public class Fibonacci
{
    public void main(int n)
    {
        int a=0,b=1,c=0,i=3;
        System.out.println(a);
        System.out.println(b);
        while(i<=n)
        {
            c=a+b;
            System.out.println(c);
            i++;
            a=b;
            b=c;
        }
    }
}