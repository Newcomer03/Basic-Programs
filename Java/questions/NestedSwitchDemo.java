package rrctw;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class NestedSwitchDemo
{
    public static void main(String[] args)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Please refer the following menu :-");
        System.out.println("*****************************************************************************");
        System.out.println("OPTIONS                                                          CHOICES");
        System.out.println("To see the elements atomic no. and electronic configuration      Press 1");
        System.out.println("To see the names of the day                                      Press 2");
        System.out.println("To see the names of the month                                    Press 3");
        System.out.println("*****************************************************************************");

        System.out.println("Enter Your Choice");
        int ch = Integer.parseInt(br.readLine());

        switch(ch)
        {
            case 1:
            System.out.println("Enter the elements name to see its atomic no and electronic configuration");
            String eleName = br.readLine().trim().toLowerCase();
            switch(eleName)
            {
                case "hydrogen":System.out.println("Its atomic no is 1 . And electronic configuration is (1)");
                break;

                case "helium":System.out.println("Its atomic no is 2 . And electronic configuration is (2)");
                break;

                case "lithium":System.out.println("Its atomic no is 3 . And electronic configuration is (2,1)");
                break;

                case "beryllium":System.out.println("Its atomic no is 4 . And electronic configuration is (2,2)");
                break;

                case "boron":System.out.println("Its atomic no is 5 . And electronic configuration is (2,3)");
                break;

                case "carbon":System.out.println("Its atomic no is 6 . And electronic configuration is (2,4)");
                break;

                case "nitrogen":System.out.println("Its atomic no is 7 . And electronic configuration is (2,5)");
                break;

                case "oxygen":System.out.println("Its atomic no is 8 . And electronic configuration is (2,6)");
                break;

                case "fluorine":System.out.println("Its atomic no is 9 . And electronic configuration is (2,7)");
                break;

                case "neon":System.out.println("Its atomic no is 10 . And electronic configuration is (2,8)");
                break;

                case "sodium":System.out.println("Its atomic no is 11 . And electronic configuration is (2,8,1)");
                break;

                case "magnesium":System.out.println("Its atomic no is 12 . And electronic configuration is (2,8,2)");
                break;

                case "aluminium":System.out.println("Its atomic no is 13 . And electronic configuration is (2,8,3)");
                break;

                case "silicon":System.out.println("Its atomic no is 14 . And electronic configuration is (2,8,4)");
                break;

                case "phosphorus":System.out.println("Its atomic no is 15 . And electronic configuration is (2,8,5)");
                break;

                case "sulphur":System.out.println("Its atomic no is 16 . And electronic configuration is (2,8,6)");
                break;

                case "chlorine":System.out.println("Its atomic no is 17 . And electronic configuration is (2,8,7)");
                break;

                case "argon":System.out.println("Its atomic no is 18 . And electronic configuration is (2,8,8)");
                break;

                case "potassium":System.out.println("Its atomic no is 19 . And electronic configuration is (2,8,8,1)");
                break;

                case "calcium":System.out.println("Its atomic no is 20 . And electronic configuration is (2,8,8,2)");
                break;

                default:System.out.println("Please enter the correct elements name whose at no is from 1 to 20 ");
            }
            break;
            
            case 2:System.out.println("Enter the day number to see the name of the day");
            int dayNum = Integer.parseInt(br.readLine());
            
                switch(dayNum)
                {
                    case 1:System.out.println("The day is MONDAY");
                    break;
                    
                    case 2:System.out.println("The day is TUESDAY");
                    break;
                    
                    case 3:System.out.println("The day is WEDNESDAY");
                    break;
                    
                    case 4:System.out.println("The day is THURSDAY");
                    break;
                    
                    case 5:System.out.println("The day is FRIDAY");
                    break;
                    
                    case 6:System.out.println("The day is SATURDAY");
                    break;
                    
                    case 7:System.out.println("The day is SUNDAY");
                    break;
                    
                    default:System.out.println("INVALID DAY NUMBER!PLEASE ENTER THE DAY NUMBER BETWEEN 1 TO 7");
                    break;
                }
                break;
                
                case 3:System.out.println("Enter the month number to see the month name");
                int monthNum = Integer.parseInt(br.readLine());
                
                switch(monthNum)
                {
                    case 1:System.out.println("The month is JANUARY");
                    break;
                    
                    case 2:System.out.println("The month is FEBRUARY");
                    break;
                    
                    case 3:System.out.println("The month is MARCH");
                    break;
                    
                    case 4:System.out.println("The month is APRIL");
                    break;
                    
                    case 5:System.out.println("The month is MAY");
                    break;
                    
                    case 6:System.out.println("The month is JUNE");
                    break;
                    
                    case 7:System.out.println("The month is JULY");
                    break;
                    
                    case 8:System.out.println("The month is AUGUST");
                    break;
                    
                    case 9:System.out.println("The month is SEPTEMBER");
                    break;
                    
                    case 10:System.out.println("The month is OCTOBER");
                    break;
                    
                    case 11:System.out.println("The month is NOVEMBER");
                    break;
                    
                    case 12:System.out.println("The month is DECEMBER");
                    break;
                    
                    default:System.out.println("INVALID MONTH NUMBER!PLEASE ENTER THE MONTH NUMBER FROM 1 TO 12");
                    break;
                }
                break;
                
                default:System.out.println("INVALID CHOICE ! AREY IDIOT SEE THE MENU CAREFULLY");
                break;
        }
    }
}
