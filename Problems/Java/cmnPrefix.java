public class cmnPrefix {

    public static String determinePrefix(String[] words) {
        String prefix = words[0];
        String prefixBuild = "";
        for (int i = 1; i < words.length; i++) {
            int j = 0;
            while (j < prefix.length() && j < words[i].length() && prefix.charAt(j) == words[i].charAt(j)) {
                prefixBuild += prefix.charAt(j);
                j++;
            }
            prefix = prefixBuild;
            prefixBuild = "";
        }
        return prefix;
    }

    public static void main(String[] args) {
        String[] words = { "alower", "alow", "alight" };
        System.out.println(cmnPrefix.determinePrefix(words));
    }
}
