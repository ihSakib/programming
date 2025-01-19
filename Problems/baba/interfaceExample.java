
interface InnerinterfaceExample {
    void method(); // by default public and abstract

    int x = 10; // by default public static final
}

public class interfaceExample implements InnerinterfaceExample {
    @Override
    public void method() {
        System.out.println("hello");
    }

    public static void main(String[] args) {
        interfaceExample myObj = new interfaceExample();
        myObj.method();
        // not allowed myObj.x = 20; , because of static members
        System.out.println(interfaceExample.x); // print static value of interfaceExample class implemented from InnerinterfaceExample
    }
}
