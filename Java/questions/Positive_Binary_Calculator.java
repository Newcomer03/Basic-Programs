package rrctw;

import java.io.*;
class Positive_Binary_Calculator
{
public static void main(String args[])throws IOException
{
BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
System.out.println("Enter A Decimal Number : ");
int n=Integer.parseInt(br.readLine());

int r;
String s=" ";

char dig[]={'0' , '1'};

while(n>0)
{
r=n%2;
s=dig[r]+s;
n=n/2;

}
System.out.println(" Output = "+s);
}
}
