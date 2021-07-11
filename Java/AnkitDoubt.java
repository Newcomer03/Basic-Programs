import java.util.Scanner;

public class AnkitDoubt
{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter an even number between 9 and 50");
        int N = scn.nextInt();
        
        if((N<=9) || (N>50))
        {
            System.out.println("INVALID INPUT, NUMBER OUT OF RANGE");
        }
        else
        {
            if(N%2==1)
            {
                System.out.println("INVALID INPUT, NUMBER IS ODD");
            }
            else
            {
                System.out.println("PRIME PAIRS ARE:-");
                int i=3;
                while(i<N)
                {
                        int prime;
                        int prime2;
                        if(isPrime(i))
                        {
                            prime=i;
                            prime2=N-prime;
                            
                            if(prime>prime2)
                            {
                                break;
                            }
                            if((prime2!=1)&&(isPrime(prime2)))
                            {
                                System.out.println(prime+","+prime2);
                            }
                        }
                        i++;
                    }
                    
                }
            }
        }
        public static boolean isPrime(int x)
        {
            int ctr=0;
            for(int i=1;i<=x;i++)
            {
                if(x%i==0)
                {
                    ctr++;
                }
            }
            if(ctr==2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }