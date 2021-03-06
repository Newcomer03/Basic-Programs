package array;

public class BinarySearch
{
    public void bsearch(int[] arr, int ele)
    {
        int first = 0, last = arr.length-1, mid;
        boolean flag = false;
        
        while(first<=last)
        {
            mid=(first+last)/2;
            
            if(arr[mid]>ele)
            {
                last=mid-1;
            }
            
            else if(arr[mid]<ele)
            {
                first=mid+1;
            }
            
            else
            {
                flag=true;
                System.out.println("Element present at position : "+(mid+1));
                break;
            }
        }
        
        if(flag==false)
        {
            System.out.println("Element not found");
        }
    }
}