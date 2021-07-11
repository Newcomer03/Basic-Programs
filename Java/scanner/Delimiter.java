package scanner;
import java.util.*;
import java.io.*;

public class Delimiter
{
    public static void main(String[] args)throws IOException
    {
        Scanner scn = new Scanner(new File("E:/Project.txt"));
        scn.useDelimiter("[,:;]");
        int a=scn.nextInt();
        String b=scn.next();
        double c=scn.nextDouble();
        String d=scn.next();
        System.out.println(a);
        System.out.println(d);
        System.out.println(c);
        System.out.println(b);
        
        }
    }
