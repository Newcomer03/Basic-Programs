package patterns;

public class Pattern13 //DangerWalaPattern
{
    public static void sampleMethod(String[] args)
    {
        int[] arr = {7,7,7,7,7};
        int[] arr2 = {7,7,7,7,7};
        /*we are taking 2 arrays arr & arr2
        because arr's value may change during
        the execution of program so to avoid it,
        we duplicate the array arr into the array, arr2*/
        
        for(int i=0;i<5;i++)
        {
            for(int j=i;j<5;j++)
            {
                arr[j]=arr2[j]-i;
            }
            
            for(int k=0;k<5;k++)
            {
                System.out.print(arr[k]);
            }
            System.out.println();
        }

    }
}

//OUTPUT
//77777
//76666
//76555
//76544
//76543

