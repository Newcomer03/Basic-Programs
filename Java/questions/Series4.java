package rrctw;


public class Series4
{
    public static void main(int n)
    {
        int num=1;
        for(int i=0;num<n;i++)
        {
            
            if(num==n)
            System.out.println(num);
            else
            {
                num=num + i;
                System.out.print(num+",");
            }
    }  
}
}