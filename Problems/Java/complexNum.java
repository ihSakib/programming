class Solution {
    public String complexNumberMultiply(String num1, String num2) {

        int a, b, c, d;

        a = Integer.parseInt(num1.substring(0, num1.indexOf("+")));
        b = Integer.parseInt(num1.substring(num1.indexOf("+") + 1, num1.length() - 1));

        c = Integer.parseInt(num2.substring(0, num2.indexOf("+")));
        d = Integer.parseInt(num2.substring(num2.indexOf("+") + 1, num2.length() - 1));

        // Calculate real and imaginary parts of the product
        int realPart = (a * c) - (b * d);
        int imaginaryPart = (a * d) + (b * c);

        // result
        return realPart + "+" + imaginaryPart + "i";
    }

}
