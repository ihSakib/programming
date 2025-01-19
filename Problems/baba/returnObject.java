
/**
 * InnerreturnObject
 */
class InnerreturnObject {

   private String hello;

    InnerreturnObject(String n) {
        hello = n;
    }

    static InnerreturnObject creatObject(String n) {
        return new InnerreturnObject(n);
    }

    public String getHello() {
        return hello;
    }

}

public class returnObject {
    public static void main(String[] args) {
        InnerreturnObject myObject = InnerreturnObject.creatObject("Hello World!");
        System.out.println(myObject.getHello());
    }
}
