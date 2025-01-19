import java.util.ArrayList;
import java.util.HashMap;
import java.util.Collections;
import java.util.Scanner;

public class IntegertoRoman {

    public static String intToRoman(int num) {

        int[] keys = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
        String[] value = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

        // HashMap<Integer, String> romanNumerals = new HashMap<>();

        // ArrayList<Integer> keys = new ArrayList<>(romanNumerals.keySet());
        // Collections.sort(keys, Collections.reverseOrder());

        String roman = "";
        for (int i = 0; i < keys.length; i++) {
            while (num >= keys[i]) {
                roman += value[i];
                num -= keys[i];
            }
        }
        return roman;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        String romanValue = Solution.intToRoman(num);
        System.out.println(romanValue);
    }
}