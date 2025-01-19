public class commonPrefix {

    public static String determinePrefix(String[] words) {
        String prefix = "";
        for (int i = 0; i < words[0].length(); i++) {

            for (int j = 1; j < words.length; j++) {
                if (i < words[j].length() && words[0].charAt(i) != words[j].charAt(i)) {
                    return prefix;
                }
            }
            prefix += words[0].charAt(i);
 
        }
        return prefix;
    }

    public static void main(String[] args) {
        String[] words = { "floower", "flooow", "floooight" };
        System.out.println(commonPrefix.determinePrefix(words));
    }
}
