package rrctw;


public class Palindrome
{
    public void main(int n)
    {
        int d=0;    //remainder
        int rev=0;  //reverse number
        int orig=n; //stores original number
        while(n>0)
        {
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        if(rev==orig)
        System.out.println("The number is Palindrome");
        else
        System.out.println("The number is not Palindrome");
    }
}