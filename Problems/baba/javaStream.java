import java.util.*;
import java.util.stream.Stream;

public class javaStream {

    public static void main(String[] args) {
        List<String> cities = Arrays.asList("Shenzhen", "Brussels", "Taipei", "Buenos Aires", "Sydney", "Bristol");

        Stream<String> citieStream = cities.stream();

    }

}
