import java.util.*;

public class Main {
    static String fixOrder(String s) {
        ArrayList<Integer> num = new ArrayList<>();
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '+') {
                continue;
            } else {
                num.add(s.charAt(i) - '0');
            }
        }
        Collections.sort(num);
        for (int i = 0; i < num.size(); i++) {
            result.append(num.get(i));
            if (i != num.size() - 1) {
                result.append("+");
            }
        }
        return result.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        System.out.println(fixOrder(s));
        scanner.close();
    }
}
