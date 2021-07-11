package array;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class BubbleSorter
{
    public void bsort(int[] a)throws InterruptedException
    {
        int temp;
        System.out.println("Before sorting, the elements are in the following order");
        Thread.sleep(1000);
        for(int i=0;i<a.length;i++)
        {
            if(i<a.length-1)
            {
                System.out.print(a[i]+",");
            }
            
            if(i==a.length-1)
            {
                System.out.println(a[i]+".");
            }
        }
        
        for(int i=0;i<a.length-1;i++)
        {
            for(int j=0;j<a.length-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        
        System.out.println("After sorting, the elements are in the following order");
        Thread.sleep(1000);
        for(int i=0;i<a.length;i++)
        {
            if(i<a.length-1)
            {
                System.out.print(a[i]+",");
            }
            
            if(i==a.length-1)
            {
                System.out.println(a[i]+".");
            }
        }
    }
    
    public static void main(String[] args)throws IOException,InterruptedException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the size of the array");
        int size=Integer.parseInt(br.readLine().trim());
        
        int[] arr = new int[size];
        
        for(int i=0;i<arr.length;i++)
        {
            System.out.println("Enter element number:- "+(i+1));
            arr[i] = Integer.parseInt(br.readLine().trim());
        }
        
        BubbleSorter bs = new BubbleSorter();
        Thread.sleep(2000);
        bs.bsort(arr);
    }
}