package array;

public class SelectionSorter
{
    public static void main(int[] arr)
    {
        int smallest,pos;
        for(int i=0;i<=arr.length-1;i++)
        {
            smallest=arr[i];
            pos=i;
            for(int j=i+1;j<=arr.length-1;j++)
            {
                if(arr[j]<smallest)
                {
                    smallest=arr[j];
                    pos=j;
                }
            }
            arr[pos]=arr[i];
            arr[i]=smallest;
        }
        
        for(int i=0;i<=arr.length-1;i++)
        {
            if(i<arr.length-1)
            System.out.print(arr[i]+", ");
            else
            System.out.print(arr[i]);
        }
    }
}