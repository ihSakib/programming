
/*The ArrayList class is a resizable array, which can be found in the java.util package.

The difference between a built-in array and an ArrayList in Java, is that the size of an array cannot be modified (if you want to add or remove elements to/from an array, you have to create a new one). While elements can be added and removed from an ArrayList whenever you want. The syntax is also slightly different: */
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class arrayListExample {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        ArrayList<String> name = new ArrayList<String>();

        name.add("Sakib");
        name.add("Roky");
        name.add("Love");
        name.add("Die");
        name.add("Jony");
        name.add("Sabbir");
        name.remove(name.size() / 2);
        System.out.println(name);

    }

}
