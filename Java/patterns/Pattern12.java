package patterns;

public class Pattern12
{
    public static void main(int n)
    {
        int[] arr=new int[n];
        int[] prev=new int[n];
        prev[0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(j==0)
                arr[j]=1;
                else
                arr[j]=prev[j]+prev[j-1];
            }
            
            for(int k=0;k<i;k++)
            System.out.print(arr[k]);
            
            for(int l=0;l<i;l++)
            prev[l]=arr[l];
            
            System.out.println();
        }
    }
}
