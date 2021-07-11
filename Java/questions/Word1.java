package questions;

public class Word1
{
    
    public static void sampleMethod(String[] args)
    {
        String st = "You play the gr8 rythm ";      //You can also make it generic by using Scanner or BufferedReader
        String word = "";       //empty String
        char ch = '\u0000';     //empty character
        int p=0;                //varriable used for word extraction
        for(int i=0;i<st.length();i++)
        {
            ch=st.charAt(i);
            boolean flag = false;

            if (ch==' ')    //this if block is used for word extraction
            {
                word = st.substring(p,i);       //word variable stores the extracted word
                for(int j=0;j<word.length();j++)
                {
                    ch = word.charAt(j);       
                    //the if block is checking for any vowel in the extracted word
                    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
                    || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                    {
                        flag=true;
                    }
                }
                p=i+1;

                if(flag==false)     //prints the word that doesn't have any vowels
                {
                    System.out.print(word+" ");
                }
            }
        }
    }
}