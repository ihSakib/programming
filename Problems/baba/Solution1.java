public class Solution1 {
    public static int longestCommonPrefix(int[] arr1, int[] arr2) {

        int maxPrefixLen = 0;
        String first, second;

        for (int i = 0; i < arr1.length; i++) {

            first = Integer.toString(arr1[i]);

            for (int j = 0; j < arr2.length; j++) {
                second = Integer.toString(arr2[j]);
                while (first.indexOf(second) != 0) {
                    second = second.substring(0, second.length() - 1);
                }
                if (second.length() > maxPrefixLen) {
                    maxPrefixLen = second.length();
                }
            }

        }
        return maxPrefixLen;
    }

    public static void main(String[] args) {
        int[] arr1 = { 100 };
        int[] arr2 = { 0};
        System.out.println(Solution1.longestCommonPrefix(arr1, arr2));
        System.out.println(Integer.MAX_VALUE>Math.pow(10, 8));
    }
}
