class OuterClass {
  static int x = 5; // Declare x as a static variable

  public static int test() {
    return x++;
  }
}

public class AnotherClass extends OuterClass {
  public static void main(String[] args) {
    System.out.println(test());
    System.out.println(test());
    System.out.println(test());
  }
}


