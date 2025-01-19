import java.util.HashSet;

public class cmnPrefixHash {

    public static int determinePrefix(int[] nums1, int[] nums2) {

        int maxPrefixLen = 0;
        HashSet<String> prefixes = new HashSet<>();
        for (int num : nums1) {
            String numString = Integer.toString(num);
            for (int i = 1; i <= numString.length(); i++) {
                String prefix = numString.substring(0, i);
                prefixes.add(prefix);
            }
        }

        for (int num : nums2) {
            String numString = Integer.toString(num);
            for (int i = 1; i <= numString.length(); i++) {
                String prefix = numString.substring(0, i);
                if (prefixes.contains(prefix) && prefix.length() > maxPrefixLen) {
                    maxPrefixLen = prefix.length();
                }


            }
        }
        return maxPrefixLen;

    }

    public static void main(String[] args) {

        int[] nums1 = { 100, 20330, 132, 332, 42434, 43432 };
        int[] nums2 = { 1000, 20330231, 342, 300, 1, 0 };
        System.out.println(cmnPrefixHash.determinePrefix(nums1, nums2));
    }
}
