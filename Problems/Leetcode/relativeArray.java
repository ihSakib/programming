import java.util.ArrayList;
import java.util.Arrays;

class Solution {
    public static int[] relativeSortArray(int[] arr1, int[] arr2) {
        ArrayList<Integer> result = new ArrayList<>();
        ArrayList<Integer> remains = new ArrayList<>();
        Arrays.sort(arr1);

        for (int i = 0; i < arr2.length; i++) {
            for (int j = 0; j < arr1.length; j++) {
                if (arr2[i] == arr1[j]) {
                    result.add(arr1[j]);
                }
            }
        }

        for (int i : arr1) {
            if (result.contains(i) == false) {
                remains.add(i);
            }
        }

        for (int i : remains) {
            result.add(i);
        }

        int[] resultArray = new int[result.size()];
        for (int i = 0; i < resultArray.length; i++) {
            resultArray[i] = result.get(i);
        }
        return resultArray;
    }
}

public class relativeArray {
    public static void main(String[] args) {
        int[] arr1 = { 2, 21, 43, 38, 0, 42, 33, 7, 24, 13, 12, 27, 12, 24, 5, 23, 29, 48, 30, 31 },
                arr2 = { 2, 42, 38, 0, 43, 21 };
        int[] result = Solution.relativeSortArray(arr1, arr2);
        for (int i : result) {
            System.out.print(i + " ");
        }
    }
}
/*
 * class Solution {
 * public int[] relativeSortArray(int[] arr1, int[] arr2) {
 * int[] cnt=new int[1001];
 * for(int i:arr1){
 * cnt[i]++;
 * }
 * int[] ans=new int[arr1.length];
 * int i=0;
 * for(int n:arr2){
 * while(cnt[n]>0){
 * ans[i]=n;
 * cnt[n]--;
 * i++;
 * }
 * }
 * for(int j=0;j<cnt.length;j++){
 * while(cnt[j]>0){
 * ans[i]=j;
 * cnt[j]--;
 * i++;
 * }
 * }
 * return ans;
 * }
 * }
 */