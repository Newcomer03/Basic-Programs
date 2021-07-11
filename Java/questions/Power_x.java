package rrctw;


public class Power_x
{
    public void main(int x, int n)
    {
        double sum=0.0;
        for(int i=1;i<=n;i++)
        sum=sum+Math.pow(x,i);
        System.out.println("Sum is: "+sum);
    }
}
            