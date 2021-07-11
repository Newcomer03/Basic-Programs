package array;

public class LinearSearch
{
    public void lsearch(int[] arr, int ele)
    {
        boolean flag=false;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==ele)
            {
                flag=true;
                System.out.println("Element present at position : "+(i+1));
            }
        }
        
        if(flag==false)
        {
            System.out.println("Element not found");
        }
        }
    }
