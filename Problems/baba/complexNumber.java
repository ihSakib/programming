import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class complexNumber {
    public static String complexNumberMultiply(String num1, String num2) {

        int a, b, c, d;
        Pattern pattern = Pattern.compile("([-+]?\\d+)\\s*(?:[+])([-+]?\\d+)i");
        Matcher firstNum = pattern.matcher(num1);
        Matcher secondNum = pattern.matcher(num2);

        if (firstNum.matches() && secondNum.matches()) {

            a = Integer.parseInt(firstNum.group(1));
            b = Integer.parseInt(firstNum.group(2));

            c = Integer.parseInt(secondNum.group(1));
            d = Integer.parseInt(secondNum.group(2));

            // Calculate real and imaginary parts of the product
            int realPart = (a * c) - (b * d);
            int imaginaryPart = (a * d) + (b * c);

            // Format the result in the form "realPart+imaginaryParti"

            return realPart + "+" + imaginaryPart + "i";
        } else {
            return "Invalid input";
        }
    }

    public static void main(String[] args) {
        System.out.println(Main.complexNumberMultiply("2+1i", "1+-1i"));
    }
}
