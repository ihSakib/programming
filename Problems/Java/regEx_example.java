import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Scanner;

public class regEx_example {
    public static void main(String[] args) {
        /*
         * Pattern pattern = Pattern.compile("[abc]");
         * Matcher matcher = pattern.matcher("I love you");
         */
        String pattern = "a|d";
        String text = "a|b|c";
        boolean matcherBoolTest = text.matches(pattern);
        if (matcherBoolTest) {
            System.out.println("Match found");
        } else {
            System.out.println("No Match");
        }

    }
}

class InnerregEx_example {

}
