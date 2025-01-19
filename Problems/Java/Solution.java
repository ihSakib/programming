import java.util.ArrayList;

public class Solution {

    public static int myAtoi(String s) {
        int intValue = 0;
        char[] stringAsArray = s.toCharArray();
        int sign = 1;
        boolean hasPlusSignWithMinus = false;
        for (char c : stringAsArray) {
            if (c == ' ') {
                continue;
            } else if (c == '-') {
                sign = -1;
            } else if (Character.isDigit(c)) {
                if (sign == -1) {

                    if (-1 * intValue < Integer.MIN_VALUE / 10
                            || (-1 * intValue == Integer.MIN_VALUE / 10 && -1 * (c - '0') < -8)) {
                        return Integer.MIN_VALUE;
                    }

                } else {
                    if (intValue > Integer.MAX_VALUE / 10
                            || (intValue == Integer.MAX_VALUE / 10 && (c - '0') > 7)) {
                        return Integer.MIN_VALUE;
                    }

                }
                intValue = intValue * 10 + (c - '0');
            } else if (Character.isLetter(c)) {
                break;
            } else if (c == '.') {
                break;
            } else if (c == '+') {
                hasPlusSignWithMinus = true;
            }
        }
        if (hasPlusSignWithMinus && sign == -1) {
            return 0;
        } else {
            return intValue * sign;
        }
    }

    public static void main(String[] args) {
        System.out.println(Solution.myAtoi("+1"

        ));
    }

}
