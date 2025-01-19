/**
 * Magical
 */
class InnerGenericClass<T> {
    public T varT;
}

public class genericClass {
    public static void main(String[] args) {
        InnerGenericClass<String> myObj = new InnerGenericClass<>();
        myObj.varT = "sakib";
        System.out.println(myObj.varT);
    }
}
