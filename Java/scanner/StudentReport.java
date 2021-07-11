package scanner;

import java.util.*;
import java.io.*;

public class StudentReport
{
    public static int wordCounter()throws IOException
    {
        Scanner scn = new Scanner(new File("E:/Project.txt"));
        int c=0;        //stores number of words
        
        while(scn.hasNext())
        {
            scn.next();
            c++;
        }
        
        
        scn.close();
        return c;
    }
    
    public static int lineCounter()throws IOException
    {
        Scanner scn = new Scanner(new File("E:/Project.txt"));
        int line=0;        //stores number of line
        
        while(scn.hasNextLine())
        {
            scn.nextLine();
            line++;
        }
        
        
        scn.close();
        return line;
    }
    
    public static void main(String[] args)throws IOException
    {
        Scanner scn = new Scanner(new File("E:/Project.txt"));
        int c=StudentReport.wordCounter();        //stores number of words
        int line=StudentReport.lineCounter();;     //stores number of lines
        
        
        for (int i=1;i<=line;i++)
        {
            int roll = scn.nextInt();
            String name=scn.next();
            int lang = scn.nextInt();
            int lit = scn.nextInt();
            int hindi = scn.nextInt();
            int comp = scn.nextInt();
            int hc = scn.nextInt();
            int geo = scn.nextInt();
            int phy = scn.nextInt();
            int chem = scn.nextInt();
            int bio = scn.nextInt();
            int maths = scn.nextInt();
            int total = lang+lit+hindi+comp+hc+geo+phy+chem+bio+maths;
            double percent = (total/400.0)*100.0;
            String division = "";
            //here student's division would be found out
            if(percent>35.0 && percent<50.0)
            {
                division = "3rd";
            }
            
            if(percent>=50.0 && percent<60.0)
            {
                division = "2nd";
            }
            
            if(percent>=60.0)
            {
                division = "1st";
            }
            
            //from here all the printing works start
            System.out.println("Roll no.         = "+roll);
            System.out.println("Name             = "+name);
            System.out.println("Language         = "+lang);
            System.out.println("Literature       = "+lit);
            System.out.println("Hindi            = "+hindi);
            System.out.println("Computer         = "+comp);
            System.out.println("History & Civics = "+hc);
            System.out.println("Geography        = "+geo);
            System.out.println("Physics          = "+phy);
            System.out.println("Chemistry        = "+chem);
            System.out.println("Biology          = "+bio);
            System.out.println("Mathematics      = "+maths);
            System.out.println("Total Marks      = 400");
            System.out.println("Marks Scored     = "+total);
            System.out.println("Percentage       = "+percent+"%");
            System.out.println("Division         = "+division);
            System.out.println("________________________________________");
        }
    }
}