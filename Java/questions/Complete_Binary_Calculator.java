package rrctw;

import java.io.*;
class Complete_Binary_Calculator
{
public static void main(String args[])throws IOException
{int flag=0;String s3="",s1="";
BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
System.out.println("Enter A Decimal Number : ");
int n=Integer.parseInt(br.readLine());
if (n<0)
{flag=1;n=n*-1;}
int r;
String s="";

char dig[]={'0' , '1'};

while(n>0)
{
r=n%2;
s=dig[r]+s;
n=n/2;

}
if (flag==0)
System.out.println(" Output = "+s);
else
{
String s2="";
s1=s.trim();
for(int i=0;i<=8-s1.length();i++)
s1="0"+s1;
for(int j=0;j<s1.length();j++)
{
if (s1.charAt(j)=='0') 
s2=s2+"1";
else
s2=s2+"0";
}
String cary="1";
for(int j=s2.length()-1;j>=0;j--)
{
if (s2.charAt(j)=='0' && cary=="0") 
{s3="0"+s3;cary="0";}
else if (s2.charAt(j)=='0' && cary=="1") 
{s3="1"+s3;cary="0";}
else if (s2.charAt(j)=='1' && cary=="0") 
{s3="1"+s3;cary="0";}
else if (s2.charAt(j)=='1' && cary=="1") 
{s3="0"+s3;cary="1";}
}
System.out.println("Output="+s3);


}
}
}
