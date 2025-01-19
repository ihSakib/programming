import java.util.ArrayList;
import java.util.Iterator;

// removing specific elements from a array list
public class removeNum {
    public static void main(String[] args) {
        ArrayList<Integer> numArrayList = new ArrayList<>();
        numArrayList.add(12);
        numArrayList.add(50);
        numArrayList.add(5);
        numArrayList.add(6);
        numArrayList.add(20);

        // Using for loop
        /*
         * for (int i = numArrayList.size() - 1; i > 0; i--) {
         * if (numArrayList.get(i) < 10) {
         * numArrayList.remove(i);
         * }
         * }
         */

        // using an iterator
        Iterator<Integer> it = numArrayList.iterator();

        while (it.hasNext()) {

            if (it.next() < 10) {
                it.remove();
            }

        }
        System.out.println(numArrayList);
    }
}
