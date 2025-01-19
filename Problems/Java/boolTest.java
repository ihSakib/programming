public class boolTest {
    public static void main(String[] args) {
        int result = 0;

        Boolean b1 = new Boolean("TRUE");
        Boolean b2 = new Boolean("true");
        Boolean b3 = new Boolean("TRUE");
        Boolean b4 = new Boolean("false");

        if (b1 == b2) // false , memory location comparison
            result = 1;

        if (b1.equals(b2)) /*
                            * the equals() method in the Boolean class checks for case-insensitive string
                            * comparison. So, this condition evaluates to true. any constructor arguments
                            * except true is considered as false
                            */
            result = result * 10;

        if (b2 == b4) // false , memory location comparison
            result = result * 100;

        if (b2.equals(b4)) // false
            result = result * 1000;
        if (b2.equals(b3)) // true
            result = result * 10000;

        System.out.println("\nresult = " + result);
    }
}
