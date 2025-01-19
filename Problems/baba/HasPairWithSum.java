import java.util.ArrayList;

// 1,3,4,3,7,9,6

public class HasPairWithSum {

    public static ArrayList<Integer> hasPair(int[] numbers, int target) {
        ArrayList<Integer> pastValue = new ArrayList<>();
        ArrayList<Integer> result = new ArrayList<>();
        for (int i = 0; i < numbers.length; i++) {
            int compliment = target - numbers[i];
            if (pastValue.contains(compliment)) {
                int i1 = pastValue.indexOf(compliment);
                int i2 = i;
                result.add(i1);
                result.add(i2);
                break;
            }
            pastValue.add(numbers[i]);
        }

        return result;

    }

    public static void main(String[] args) {
        int[] nums = { 7, 6, 3, 9, 3, 6 };
        int target = 10;

       System.out.println(HasPairWithSum.hasPair(nums, target));
        // boolean result = HasPairWithSum.hasPair(nums, target);
        // System.out.println(result);

    }
}
