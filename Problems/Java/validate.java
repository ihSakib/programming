import java.util.regex.*;
import java.util.Scanner;

public class validate {

    public static String validatePass(String s) {
  //      String validatorPattern = "^(?=.*[A-Za-z])(?=.*\\d).{8,}$";
  String validatorPattern = "^[0-9]{1}[a-zA-Z]{1}.{8,}$";

        if (Pattern.matches(validatorPattern, s)) {
            return "Password is strong enough";
        } else {
            return "Password must contain at least one character and one digit and be at least 8 characters long ";
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your password:");
        String key = scanner.nextLine();
        System.out.println(validatePassword.validatePass(key));
    }
}
