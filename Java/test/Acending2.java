package test;

import java.io.*;

public class Acending2
{
    public static int check(int i,int j)        //this loop helps in finding the smaller numbers and returns them
    {
        if(i<=j)
        {
            return i;
        }
        else
        {
            return j;
        }
    }

    public static int check2(int i,int j)       //this loop helps in finding the larger numbers and returns them
    {
        if(i>j)
        {
            return i;
        }
        else
        {
            return j;
        }
    }

    public static void main(String[] args)throws IOException    //this is the main()- method
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a number");
        String number=br.readLine().trim(); //stores the integral number given by the user
        String small="",large="";           //helps in storing smallest and largest numbers in String format
        int a,b;                            //stores number.charAt(i) & number.charAt(j) respectively in integer format
        String s1="",s2="";                 //stores number.charAt(i) & number.charAt(j) respectively in String format
        int smallest=0,largest=0;           //stores smallest & largest numbers respectively
        int ctr=0;                          //counter variable for storing the number of '0's in the given number
        String newNumber="";                //stores and prints the new number

        for(int i=1;i<=number.length()-1;i++)
        {
            if(number.charAt(i-1)=='0')
            {
                ctr++;
            }
            s1=s1+number.charAt(i);
            a=Integer.parseInt(s1);

            s2=s2+number.charAt(i-1);
            b=Integer.parseInt(s2);

            smallest=check(a,b);        //this portion I have a doubt
            largest=check2(a,b);        //this portion I have a doubt
            largest=largest/10;
            
        }
        
        small=Integer.toString(smallest);
        
        large=Integer.toString(largest);
        if(ctr!=0)
        {
            for(int i=1;i<=ctr;i++)
            {
                newNumber=newNumber+0;
            }
        }

        newNumber=newNumber+small+large;
        System.out.println(newNumber.substring(0,number.length()));     //this portion I have a doubt
    }
}