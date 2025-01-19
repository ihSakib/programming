import java.util.HashMap;
import java.util.Collections;

public class HashMapExample {

    public static void main(String[] args) {

        HashMap<String, String> totalPopulation = new HashMap<>();
        totalPopulation.put("Bangladesh", "171 M");
        totalPopulation.put("China", "1412 M");
        totalPopulation.put("India", "1417 M");
        totalPopulation.put("Norway", "4.54 M");


        for (String i : totalPopulation.keySet()) {
        System.out.println(i+" - "+ totalPopulation.get(i) );
        }

    }

}
