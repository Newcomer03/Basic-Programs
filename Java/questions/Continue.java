package rrctw;


public class Continue
{
    public void cloop()
    {
        for(int j=0;j<10;j++)
        {
            System.out.println(j);
            if(j%2==0)
            continue;
            System.out.println(" ");
        }
    }
}