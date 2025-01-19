import java.util.Scanner;


record Player( String first,String last, int level) {
    @Override
    public String toString() {
        return String.format("First name - %s \nlast name - %s\nLevel - %d",first, last ,  level);
    }
}

public class  javaRecord {
public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String first = scanner.nextLine(), last = scanner.nextLine();
        var level = scanner.nextInt();
        var jane = new Player(first,last,level);
        System.out.println(jane);
    }
}
