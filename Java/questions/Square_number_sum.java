package rrctw;


public class Square_number_sum
{
    public void main(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+i*i;
        }
        System.out.println("Sum is: "+sum);
    }
}