abstract class InnerabstractClass {

    public int x = 7;
    public abstract void add(); // no body

}

public class abstractClass extends InnerabstractClass {
    @Override
    public void add() {
        System.out.println("hello");
    }

    public static void main(String[] args) {
        abstractClass myObj = new abstractClass();
        myObj.x = 10;
        System.out.println(myObj.x);
        myObj.add();
    }
}
