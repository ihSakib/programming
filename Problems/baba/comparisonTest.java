public class comparisonTest {

    public int x = 5;
    public int y = 7;

    public static void main(String[] args) {

        Main o1Main = new Main();
        Main o2Main = new Main();

        if (o1Main.equals(o2Main)) {
            System.out.println("fizz");
        }
        if (o1Main == o2Main) {
            System.out.println("Buzz");
        }

        if (o1Main != o2Main) {
            System.out.println("Zigg");
        }
        
    }

}