import java.util.ArrayList;
import java.util.List;

public class permutation {

    public static List<List<Integer>> generatePermutations(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        generatePermutationsHelper(new ArrayList<>(), nums, result);
        return result;
    }

    private static void generatePermutationsHelper(List<Integer> permutation, int[] remaining,
            List<List<Integer>> result) {

        if (permutation.size() == remaining.length) {
            result.add(new ArrayList<>(permutation));
        }

        else {
            for (int i = 0; i < remaining.length; i++) {
                if (!permutation.contains(remaining[i])) {
                    permutation.add(remaining[i]);
                    generatePermutationsHelper(permutation, remaining, result);
                    permutation.remove(permutation.size() - 1);
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] nums = { 2, 7, 9 };
        List<List<Integer>> permutations = generatePermutations(nums);

        System.out.println(permutations);

    }

}
