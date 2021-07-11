package rrctw;


public class Factorise
{
    public void main(int a, int b, int c)
    {
        int f1=0,f2=0,hcf1=0,hcf2=0;
        for(int i=1;i<=(a*c);i++)
        {
            f1=i;
            f2=(a*c)/i;
            if((f1+f2==b) && ((a*c)%i==0))
            {
                for(int j=1;j<=a && j<=f1;j++)
                {
                    if(a%j==0 && f1%j==0)
                    hcf1=j;
                }
                for(int j=1;j<=c && j<=f2;j++)
                {
                    if(c%j==0 && f2%j==0)
                    hcf2=j;
                }
                break;
            }
        }
        System.out.println("("+hcf1+"x+"+hcf2+")("+a/hcf1+"x+"+f1/hcf1+")");
    }
}