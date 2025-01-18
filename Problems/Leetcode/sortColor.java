import java.util.*;

class Solution {
    public void sortColors(int[] nums) {
        int n = nums.length;
        int left = 0, right = n - 1;
        int i = 0;
        while (i <= right) {
            if (nums[i] == 0) {
                Swap(nums[left], nums[i]);
                left++;
                i++;
            } else if (nums[i] == 1) {
                i++;
            } else if (nums[i] == 2) {
                swap(nums[right], nums[i]);
                right--;
            }
        }
        
    }
}

public class sortColor {
    public static void main(String[] args) {
        
    }
}
