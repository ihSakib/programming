public class longestCommonPrefix {
    public static String commonPrefix(String[] strs) {

        if (strs == null || strs.length == 0) {
            return "";
        }
        // Compare first string to all other strings
        String prefix = strs[0];
        for (int i = 1; i < strs.length; i++) {
            // if current prefix is not contained in the current string, chop off end of
            // prefix
            // until it is contained in current string (could end up with empty string)
            while (strs[i].indexOf(prefix) != 0) {
                prefix = prefix.substring(0, prefix.length() - 1);
            }
        }
        return prefix;
    }

    public static void main(String[] args) {
        String[] strs = { "hello", "hel", "hellohygf" };

        System.out.println(longestCommonPrefix.commonPrefix(strs));
    }
}
