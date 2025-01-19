import java.util.HashMap;
import java.util.Map;
import java.util.Iterator;
public class occurrencesCheck { 
    public static void printDuplicatesMoreThanTwice(int[] arr) {
        Map<Integer, Integer> countMap = new HashMap<>();

        // Count occurrences  of each element in the array
        for (int num : arr) {
            countMap.put(num, countMap.getOrDefault(num, 0)+1);
        } // bujchi

        Iterator<Integer,Integer> iterator = countMap.iterator<>();
        // Print elements that occur more than two times
        for (Map.Entry<Integer, Integer> entry : countMap.entrySet()) {
            if (entry.getValue() > 2) {
                System.out.println(entry.getKey() + " occurs " + entry.getValue() + " times.");
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 1, 2, 3, 1, 2, 2};
        printDuplicatesMoreThanTwice(arr);
    }
}
