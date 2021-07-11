package rrctw;


import java.io.*;

public class ReverseEachWordOfString
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
        System.out.println("Enter a Sentence");
        String st=br.readLine().trim()+" ";
        String temp="";
        char ch;
        int p=0;
        String res="";
        for(int i=0;i<st.length();i++)
        {
            ch=st.charAt(i);
            if(ch==' ')
            {
                temp=st.substring(p,i);
                p=i+1;
                for(int j=temp.length()-1;j>=0;j--)
                {
                    res=res+temp.charAt(j);
                    if (res.length()==temp.length())
                    {
                        res=res+" ";
                        
                    }
                }
                System.out.print(res);
            }

        }

    }
}