package rrctw;


public class Break
{
    public void bloop()
    {
        int sum=0;
        for(int i=0;i<100;i++)
        {
            if(sum>30)
            break;
            sum+=i;
        }
    }
}