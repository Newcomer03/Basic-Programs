package rrctw;


public class Number_ADD_SUBS
{
    public void main(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            sum=sum-i;
            else
            sum=sum+i;
        }
        System.out.println("Sum is: "+sum);
    }
}