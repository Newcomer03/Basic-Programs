package rrctw;


public class Smallest_of_3_numbers{
    public void main()
    {
        int a=76 , b=87 , c=48 , d, d1;
        d= a<b ? a:b;
        d1= d<c ? d:c;
        System.out.println(d1+" is the smallest number");
    }
}