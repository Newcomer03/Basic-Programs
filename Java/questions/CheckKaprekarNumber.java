package rrctw;


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class CheckKaprekarNumber
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a Number");
        String st = br.readLine().trim();
        int d = st.length();      //it'll give us the no. of digits
        int n = Integer.parseInt(st);
        int sum = findSumOfBothPiece(n,d);
        
        if(sum==n)
        System.out.println(n+" is a Kaprekar Number");
        else
        System.out.println(n+" is not a Kaprekar Number");
    }
    
    public static int findSumOfBothPiece(int n,int d)
    {
        int square = n*n;
        int rhp = square%(int)Math.pow(10,d);  //its the right hand piece
        int lhp = square/(int)Math.pow(10,d);  //its the left hand piece
        int sum = lhp + rhp;
        return sum;
    }
}
