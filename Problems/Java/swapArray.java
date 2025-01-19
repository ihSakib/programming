import java.util.Arrays;

public class swapArray {

    static void swap(int[] num) {
        int i = 0, j = num.length - 1;

        while (i < j) {
            int temp = num[i];
            num[i] = num[j];
            num[j] = temp;

            i++;
            j--;
        }
    }

    public static void main(String[] args) {
        int[] num = { 1, 4, 5, 2, 3, 52 };
        System.out.print("Before Swapping > ");
        for (int i : num) {
            System.out.print(i+" ");
        }
        swap(num);
        System.out.print("\nAfter Swapping > ");
       for (int i : num) {
        System.out.print(i+" ");
       }


       System.out.print("\nSorted > ");
       Arrays.sort(num);
       for (int i : num) {
        System.out.print(i+" ");
       }
       
    }
}
