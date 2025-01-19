import java.util.Scanner; // Scanner class for user input 

public class exceptionHandling {

   
    public static void main(String[] args)  {
        Scanner scan = new Scanner(System.in); // creating an input object
        // input a integer , then anything without integer and see the difference
       
        try {
            System.out.print("Input a number > ");
            int n = scan.nextInt();
            System.out.println("The number is > "+n);
        } catch (Exception e) {
            throw new ArithmeticException("Wrong Input, try again");
        }
    }

}