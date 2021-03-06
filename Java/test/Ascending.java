package test;

import java.io.*;

public class Ascending
{
    //stores our sorted number
     static int store = 0; 

     public static void main(String []args)throws IOException
     {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter a number");
        int number=Integer.parseInt(br.readLine().trim());
        int original = number; 

        while (number > 0) {
            //digit by digit - get last most digit
            int digit = number % 10;

             

            //get the whole number minus the last most digit 
            int temp = number / 10; 

            //loop through number minus the last digit to compare
            while(temp > 0) {
                
                //get the last digit of this sub-number
                int t = temp % 10; 

                //compare and find the lowest
                //for sorting descending change condition to t > digit
                if(t < digit)   
                    digit = t; 

                //divide the number and keep loop until the smallest is found
                temp = temp / 10;
            }
            

            //add the smallest digit to store 
            store = (store * 10) + digit; 

            

            //we found the smallest digit, we will remove that from number and find the 
            //next smallest digit and keep doing this until we find all the smallest 
            //digit in sub chunks of number, and keep adding the smallest digits to 
            //store
            number = getReducedNumber(number, digit); 
        }
        System.out.println("Ascending order of " + original + " is " + store); 
     }


     /*
     * A simple method that constructs a new number, excluding the digit that was found
     * to b e smallest and added to the store. The new number gets returned so that 
     * smallest digit in the returned new number be found.
     */
     public static int getReducedNumber(int number, int digit) {
         
        int newNumber = 0; 

        //flag to make sure we do not exclude repeated digits, in case there is 44
        boolean repeatFlag = false; 
        while(number > 0) {
            int t = number % 10; 
            //assume in loop one we found 1 as smallest, then we will not add one to the new number at all
            if(t != digit) {
                newNumber = (newNumber * 10) + t; 
            } else if(t == digit) {
                if(repeatFlag) {
                   
                    store = (store * 10) + t; 
                    
                    //we found another value that is equal to digit, add it straight to store, it is 
                    //guaranteed to be minimum
                } else {
                    //skip the digit because its added to the store, in main method, set flag so 
                    // if there is repeated digit then this method add them directly to store
                    repeatFlag = true; 
                }
            }
            number /= 10; 
        }
        
        return newNumber; 
     }
}