import java.util.*;

public class uniqueChar {

    public static void main(String[] args) {
        HashSet<Character> uniChar = new HashSet<>();
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()) {
            String line = scanner.nextLine();
            for (char ch : line.toCharArray()) {
                if (Character.isLetter(ch)) {
                    uniChar.add(ch);
                }
            }
        }

        System.out.println(uniChar.size());
        scanner.close();
    }
}